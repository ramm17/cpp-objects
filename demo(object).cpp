#include<iostream>
#include<conio.h>
using namespace std;
class sum
{
private:
    float num1,num2,result;//data members
public:
    void get_input()//member function
    {
        cout<<"Enter any two number:"<<endl;
        cin>>num1>>num2;
    }
    void show_output()//member functiion
    {
        result=num1+num2;
        cout<<"Addition = "<<result;
    }
};
int main()
{
    sum obj;//object create
    obj.get_input();
    obj.show_output();
    getch();
    return 0;

}
