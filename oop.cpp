#include<iostream>
#include <string>
using namespace std;

class A{
    private:

    int privateA=10;

    public:

    int publicA=40;
    void show(){
        cout<<"calling sum of class A\n";
        cout<<"showing protected A:"<<protectedA<<endl;
        cout<<sum();
    }
    protected:
    
    int protectedA=30;
    int sum(){
        cout<<"showing protected member function:";
        return privateA+publicA;
    }
};

class B:public A{
    private:
    int privateB=210;
    public:
    int publicB=200;

    int access(){
        cout<<"publicA is:"<<publicA<<endl;
        cout<<"protectedA is:"<<protectedA<<endl;
        // cout<<test()<<endl;

    }
    protected:
    int protectedB=220;
    int  test(){
         return sum();
    }
};
int main(){
    A objA;
    // obja.show();
    B objB;
    // cout<<objB.access();
    // cout<<objA.sum();
 
    return 0;
}