#include<iostream>
#include<conio.h>
using namespace std;
class Area
{
private:
    float l,b,h,result;//data members
public:
    void get_input()//member function
    {
        cout<<"Enter the length,breadth and height of cuboid:"<<endl;
        cin>>l>>b>>h;
    }
    void show_output()//member functiion
    {
        result=2*(l*b+b*h+h*l);
        cout<<"Surface Area of cuboid = "<<result;
    }
};
int main()
{
    Area ac;//object create
    ac.get_input();
    ac.show_output();
    getch();
    return 0;

}

