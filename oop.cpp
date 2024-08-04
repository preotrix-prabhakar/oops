#include<iostream>
#include <string>
using namespace std;

class Teacher{

    private:
    double salary;

    public:
    Teacher(){
        // cout<<"hi am a constructor"<<endl;
        dept="matallurgy";
    }
    //attributes
    string name;
    string dept;
    string subject;
    //methods member functions
    void changeDept(string newDept){
        dept=newDept;
    }
    //setter
    void setSalary(int s){
        salary=s;
    }
    //getter
    double getSalary(){
        return salary;
    }
    void getInfo(){
        cout<<"name is "<<this->name<<endl;
        cout<<"dept is "<<this->dept;
        
    }
};
class Account{
    private:
    double balance;
    string password;

    public:
    string accountId;
    string username;
};
int main(){
Teacher t1;
    t1.name="sdfs";
    t1.setSalary(50000);
    // cout<<t1.name<<endl;
    // cout<<t1.dept<<endl;
    // cout<<t1.getSalary();
    Teacher t2(t1);
    t2.getInfo();

return 0;
}