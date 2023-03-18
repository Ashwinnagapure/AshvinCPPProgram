#include <iostream>
using namespace std;
class variable
{
public:
    int a, b, result;
    char op;
    void Display(void)
    {
        cout << "Enter the value of A" << endl;
        cin >> a;
        cout << "Enter the value of B" << endl;
        cin >> b;
        cout << "Enter the value of OPERATOR" << endl;
        cin >> op;
        switch (op)
        {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            cout << "Enter the valid OPERATOR" << endl;
            break;
        }
    }
     void Result(void)
    {
        cout << a << op << b << " :-" << result << endl;
    }
};
int main()
{
    variable m;
    m.Display();
    m.Result();
}