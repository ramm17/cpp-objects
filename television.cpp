#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class Television
{
private:
    char bran[20],mod[20];
    float pri;
    int siz;
public:
    void get_data();
    void show_data();
};
void Television::get_data()
{
    cout<<"Enter Television Brand: ";
    cin>>bran;
    cout<<"Enter Television Model No: ";
    cin>>mod;
    cout<<"Enter Television  Size: ";
    cin>>siz;
    cout<<"Enter Television  Price: ";
    cin>>pri;
}
void Television::show_data()
{

    cout<<"Television Brand    : "<<bran<<endl;
    cout<<"Television Model No : "<<mod<<endl;
    cout<<"Television Size     : "<<siz<<endl;
    cout<<"Television Price    : "<<pri<<endl;
}
int main()
{
    Television tel;
    cout<<"****** TELEVISION DETAIL ******"<<endl;
    tel.get_data();
    system("cls");
    cout<<"****** TELEVISION DETAIL ******"<<endl;
    tel.show_data();
    getch();
    return 0;
}


