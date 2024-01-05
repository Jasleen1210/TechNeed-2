#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Odd Input";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        if (i < n / 2 + 1)
        {
            if (i == 1)
            {
                for (int st = 1; st <= n; st++)
                {
                    cout << "*\t";
                }
            }
            else
            {
                for (int j = 0; j < i - 1; j++)
                {
                    cout << "\t";
                }
                cout << "*\t";
                for (int j = n - 2 * i; j > 0; j--)
                {
                    cout << "\t";
                }
                cout << "*\t";
            }
        }
        else
        {
            // inverted triangle spaces
            for (int j = n / 2; j >= i - n / 2; j--)
            {
                cout << "\t";
            }
            // odd number stars
            for (int j = 2 * i - n; j > 0; j--)
            {
                cout << "*\t";
            }
        }

        cout << endl;
    }
}
