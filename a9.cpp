#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Odd Input";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i < (n / 2) + 1)
        {
            for (int s = 1; s <= i - 1; s++)
            {
                cout << "  ";
            }
            cout << "*";
            for (int j = 1; j <= 2*((n / 2) - i + 1); j++)
            {
                cout << "  ";
            }
            cout << "*";
            for (int s = 1; s <= i - 1; s++)
            {
                cout << "  ";
            }
        }

        else if (i == (n / 2) + 1)
        {
            for (int f = 1; f <= n/2 ; f++)
            {
                cout <<"  ";
            }
            cout << " * ";
        }

        else
        {
            for (int s = 1; s <= n - i; s++)
            {
                cout << "  ";
            }
            cout << "*";
            for (int j = 1; j <= 2*((n / 2) - (n - i + 1) + 1); j++)
            {
                cout << "  ";
            }
            cout << "*";
            for (int s = 1; s <= n - i; s++)
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
