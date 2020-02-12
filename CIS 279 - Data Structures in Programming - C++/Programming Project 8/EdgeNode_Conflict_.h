#ifndef Programming_Project_8_EdgeNode_h
#define Programming_Project_8_EdgeNode_h


class EdgeNode
{
private:
    int vertex_num;
public:
    EdgeNode(int vnum)
    {
        vertex_num = vnum;
    }
    
    void Setvnum(int num)
    {
        vertex_num = num;
    }
    
    int getvnum()
    {
        return vertex_num;
    }
    
    int getvnum() const
    {
        return vertex_num;
    }
    
    bool operator == (const EdgeNode& obj)
    {
        if (vertex_num == obj.vertex_num)
        {
            return true;
        }else{
            return false;
        }
    }
};


#endif
