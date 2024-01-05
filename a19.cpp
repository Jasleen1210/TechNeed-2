// hilter sign
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Odd Input";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            for (int j = n / 2 + 1; j > 0; j--)
            {
                cout << "*\t";
            }
            for (int s = n / 2 - 1; s > 0; s--)
            {
                cout << "\t";
            }
            cout<<"*";
        }
        else if (i > 1 && i < n / 2 + 1)
        {
            for (int j = n / 2; j > 0; j--)
            {
                cout << "\t";
            }
            cout << "*\t";
            for (int j = n / 2 - 1; j > 0; j--)
            {
                cout << "\t";
            }
            cout << "*\t";
        }
        else if (i == n / 2 + 1)
        {
            for (int j = n; j > 0; j--)
            {
                cout << "*\t";
            }
        }
        else if (i > n / 2 + 1 && i < n)
        {
            cout << "*\t";
            for (int j = n / 2 - 1; j > 0; j--)
            {
                cout << "\t";
            }
            cout << "*\t";
            for (int j = n / 2 + 1; j > 0; j--)
            {
                cout << "\t";
            }
        }
        else if(i==n)
        {
            cout<<"*";
            for (int j = n / 2 - 1; j > 0; j--)
            {
                cout << "\t";
            }
            for (int j = n / 2 + 1; j > 0; j--)
            {
                cout << "*\t";
            }
            
        }
        cout << endl;
    }
}