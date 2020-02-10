/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#ifndef Assignment_15___38_h
#define Assignment_15___38_h

class TowersOfHanoi{
 
    public:
    void hanoiTowers(int a, char b, char c, char d){
        using namespace std;
        if( a > 0 ){
            hanoiTowers( a-1,b,d,c );
            cout << "Disk " << a << "  was moved from peg " << b << " to peg " << d << endl;
            hanoiTowers( a-1,c,b,d );
        }
    }
};
#endif