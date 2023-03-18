#include <iostream>
using namespace std;
class vector
{
private:
    int a = 0;
    int b = 0;
public:
    void getvalue()
    {
        cout << "a=";
        cin >> a;
        cout << "b=";
        cin >> b;
    }
    void show()
    {
        cout << a << "\n"<< b << "\n"<< endl;
    }
   void friend operator*(vector &x);
     vector operator*(const vector &x)
    {
        vector y;
        y.a = a * x.a;
        y.b = b * x.b;
        return y;
    }
};
int main()
{
    vector c1,c2,result;
    cout << "enter the number :";
    c1.getvalue();
    cout << "enter the number :";
    c2.getvalue();

    result = c1*c2;
    result.show();
}