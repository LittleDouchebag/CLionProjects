#include <limits>
#include <iostream>
#include <cstring>
using namespace std;

inline void fun(int);
int main() {
    struct happy{
        int i=0;
        int count = 100;
    };
    happy *happy_me = new happy;
    happy_me->i++;
    happy *p = new happy;
    fun(100);
    if(p && p->count > 1)
        cout<<p<<endl;
}
void shutip();
inline void fun(int happy){
    return shutip();
}
void shutip(){
    return;
}