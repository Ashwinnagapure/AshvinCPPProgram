#include <iostream>
using namespace std;
class A
{
    int x;
    friend void swap(int*,int*);
};
class B
{
    int y;
    friend void swap(int*,int*);
};
void swap(int *s,int *j)
{
    int temp;
    A a;
    B b;
    a.x=*s;
    b.y=*j;
    temp=*s;
    *s=*j;
    *j=temp;
    cout<<"After swapping:\n"<<"a="<<*s<<endl<<"b="<<*j<<endl;
}

int main()
{

    int s,j;
    cout<<"Enter Two numbers:";
    cin>>s>>j;
    cout<<"Before swapping:\n"<<"a="<<s<<endl<<"b="<<j<<endl;
    swap(&s,&j);
    return 0;
}