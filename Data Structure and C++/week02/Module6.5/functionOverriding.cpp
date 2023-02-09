#include <bits/stdc++.h>
using namespace std;
class Parent
{
public:
    void fun(){
        cout<<"Parent"<<endl;
    }
};
class Child:public Parent
{
public:
    void fun(){ // run time overriding parent function. if it will occur in compile time then parent class function will modify by child class function. then we can not get parent function.
        cout<<"Child"<<endl;
    }
};

int main()
{
    Parent pt;
    Child cd;
    cd.fun();
    pt.fun();
    return 0;
}