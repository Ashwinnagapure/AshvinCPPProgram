#include <iostream>
using namespace std;
int main()
{

    int n, m, a[100][100], b[100][100], sum[100][100], mul[100][100], i, j, k,choice;

    cout << "enter the rows of marix : ";
    cin >> n;
    cout << "enter the column of matrix : ";
    cin >> m;

    cout << "the elements of the matrix  1 : " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "the first matrix is : \n";

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << "\t" << a[i][j];
            if (j == n - 1)
            {
                cout << "\n\n";
            }
        }
    }
    cout << "the elements of the matrix  2 : " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> b[i][j];
        }
    }

    cout << "the second  matrix is : \n";

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << "\t" << b[i][j];
            if (j == m - 1)
            {
                cout << "\n\n";
            }
        }
    }
   for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "the sum of the matrix is : " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << "\t" << sum[i][j];
            if (j == m - 1)
            {
                cout << "\n\n";
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                mul[i][j] = a[i][k]*b[k][j];
            }
        }
    }
    cout << "the multiplication of the matrix is " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << "\t" << mul[i][j];
           
        }
        cout<<"\n";
    }
}
/*do
{
   switch ( choice)
   {
   case 1:
   
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "the sum of the matrix is : " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << "\t" << sum[i][j];
            if (j == m - 1)
            {
                cout << "\n\n";
            }
        }
    }
    
    break;
    case 2 :
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < n; i++)
            {
                mul[i][j] = a[i][k] * b[k][j];
            }
        }
    }
    cout << "the multiplication of the matrix is " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << "\t" << mul[i][j];
            if (j == m - 1)
            {
                cout << "\n\n";
            }
        }
    }
   
   default:
    break;
   }
} while (1);*/
