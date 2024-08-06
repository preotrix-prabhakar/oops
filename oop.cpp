#include<iostream>
#include <string>
using namespace std;

class A{
    private:
    int privateA=10;
    public:
    int publicA=20;
    protected:
    
    int protectedA=30;
    void show(){
        cout<<protectedA<<endl;
    }
};

class B:public A{
    public:
    void test(){

    }
};
int main(){
    B objB;
    cout<<objB.show();
    return 0;
}