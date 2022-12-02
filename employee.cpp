#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class Employee
{
private:
    char name[20],add[20],post[20];
    int sal;
public:
    void get_data();
    void show_data();
};
void Employee::get_data()
{
    cout<<"Enter Employee's Name: ";
    cin>>name;
    cout<<"Enter Employee's Address: ";
    cin>>add;
    cout<<"Enter Employee's Post: ";
    cin>>post;
    cout<<"Enter Employee's Salary: ";
    cin>>sal;
}
void Employee::show_data()
{
    cout<<"Employee's Name     : "<<name<<endl;
    cout<<"Employee's Address  : "<<add<<endl;
    cout<<"Employee's Post     : "<<post<<endl;
    cout<<"Employee's Salary   : "<<sal<<endl;
}
int main()
{
    Employee emp;
    cout<<"****** EMPLOYEE DETAIL ******"<<endl;
    emp.get_data();
    system("cls");
    cout<<"****** EMPLOYEE DETAIL ******"<<endl;
    emp.show_data();
    getch();
    return 0;
}

