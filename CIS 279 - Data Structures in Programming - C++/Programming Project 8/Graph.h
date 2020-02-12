#ifndef Programming_Project_8_Graph_h
#define Programming_Project_8_Graph_h
#include <cstdlib>
#include <List>
#include <set>
#include <stack>
#include "EdgeNode.h"
#include "QueType.h"

using namespace std;
const size_t MAXIMUM = 100;

template <class Item>
class Graph
{
private:
    Item vertexlist[MAXIMUM];
    list <EdgeNode> edges[MAXIMUM];
    size_t many_vertices;
    
public:
    
    Graph();
    void add_vertex(const Item& label);
    void add_edge(size_t source, size_t target);
    void remove_edge(size_t source, size_t target);
    Item& operator [] (size_t vertex);\
    int getIndex(Item item);
    
    size_t size() const;
    bool is_edge(size_t source, size_t target) const;
    set <size_t> neighbors(size_t vertex) const;
    Item operator [] (size_t vertex) const;
    
    bool is_path_depth(size_t source, size_t target) const;
    bool is_path_breadth(size_t source, size_t target) const;
};

template <class Item>
Graph<Item>::Graph()
{
    many_vertices = 0;
}

template <class Item>
void Graph<Item>::add_vertex(const Item& label)
{
    vertexlist[many_vertices] = label;
    many_vertices ++;
}

template <class Item>
void Graph<Item>::add_edge(size_t source, size_t target)
{
    if (is_edge(source, target))
    {
        return;
    }else{
        edges [source].push_front(target);
    }
}

template <class Item>
void Graph<Item>::remove_edge(size_t source, size_t target)
{
    size_t size =0;
    size = edges[source].size();
    for (int i =0; i < size; i++)
    {
        if (edges[source].front() == target)
        {
            edges[source].pop_front();
            return;
        }else{
            EdgeNode Temp = edges[source].front();
            edges[source].pop_front();
            edges[source].push_back(Temp);
        }
    }
}

template <class Item>
Item& Graph<Item>::operator[] (size_t vertex)
{
    return vertexlist[vertex];
}

template <class Item>
size_t Graph<Item>::size() const
{
    return many_vertices;
}

template <class Item>
bool Graph<Item>::is_edge(size_t source, size_t target) const
{
    bool return_value = false;
    
    for (list<EdgeNode>::const_iterator it=edges[source].begin(); it != edges[source].end(); ++it)
    {
        if (it->getvnum() == target)
        {
            return true; 
        }
    }

    return return_value;
}

template <class Item>
set<size_t> Graph<Item>::neighbors(size_t vertex) const
{
    set<size_t> myset;
    size_t size =0;
    size = edges[vertex].size();

    for (list<EdgeNode>::const_iterator it=edges[vertex].begin(); it != edges[vertex].end(); ++it)
    {
        myset.insert(it->getvnum());
    }

    return myset;
}

template <class Item>
int Graph<Item>::getIndex(Item item)
{
    int index =0;
    while (index < many_vertices && vertexlist[index] != item)
    index ++;
    if (index == many_vertices)
    {
      return -1;
    }else{
      return index;
    }
}

template <class Item>
Item Graph<Item>::operator[] (size_t vertex) const
{
    return vertexlist[vertex];
}

template <class Item>
bool Graph<Item>::is_path_depth(size_t source, size_t target) const
{
    bool *visted = new bool[many_vertices];
    int vertex= 0;
    set<size_t> temp_set;
    for (int i = 0; i < many_vertices; i++)
    {
        visted[i] = false;
    }
    QueType depth_queue;
    depth_queue.Enqueue(source);
    do {
    
        depth_queue.Dequeue(vertex);
        if ( visted[vertex] == false)
        {
            if ( vertex == target)
            {
                return true;
            }
            visted[vertex] = true;
            temp_set = neighbors(vertex);
            for (set<size_t>::const_iterator it=temp_set.begin(); it != temp_set.end(); ++it)
            {
                if ( visted[*it]  == false)
                {
                    depth_queue.Enqueue(*it);
                }else{
                    cout << *it << endl;
                }
            }
        }
    }while (!depth_queue.IsEmpty());
    return false; 
}


template <class Item>
bool Graph<Item>::is_path_breadth(size_t source, size_t target) const
{
    bool *visted = new bool[many_vertices];
    int vertex= 0;
    set<size_t> temp_set;
    for (int i = 0; i < many_vertices; i++)
    {
        visted[i] = false;
    }
    
    stack<size_t> breadth_queue;

    breadth_queue.push(source);
    do {
        
        breadth_queue.pop();
        if ( visted[vertex] == false)
        {
            if ( vertex == target)
            {
                return true;
            }
            visted[vertex] = true;
            temp_set = neighbors(vertex);
            for (set<size_t>::const_iterator it=temp_set.begin(); it != temp_set.end(); ++it)
            {
                if ( visted[*it]  == false)
                {
                    breadth_queue.push(*it);
                }else{
                    cout << *it << endl;
                }
            }
        }
    }while (!breadth_queue.empty());
    
    return false;

}
#endif
