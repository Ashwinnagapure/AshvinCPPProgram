#include <iostream>
using namespace std : 
class max1
{
    int n;

public:
    getdata();
    putdata();
};

max1::getdata()
{
    cout << "enter the number 1 : ";
    cin >> n;
}

max1::putdata()
{

    cout << n << endl;
}

class max2
{
    int m;

public:
    getdata();
    putdata();
};

max2::getdata()
{
    cout << "enter the number 2 : ";
    cin >> m ;
}

max2::putdata()
{
    cout << m << endl;
}

int main()
{
    max1 num1;
    max2 num2;

if (num1.getdata()>=num2.getdata())
{
    cout<<"the num1 is greter";
}


}