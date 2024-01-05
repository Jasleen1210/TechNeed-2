#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Odd Input";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        if (i <= (n / 2) + 1)
        {
            int temp = i, pmet = 2 * i - 2;
            for (int s = (n / 2) - i + 1; s >= 0; s--)
            {
                cout << "\t";
            }

            for (int k = 1; k <= 2 * i - 1; k++)
            {
                while (temp <= 2 * i - 1)
                {
                    cout << temp++ << "\t";
                }
                while (temp > 2 * i - 1 && pmet >= i)
                {
                    cout << pmet-- << "\t";
                }
                // temp++;
            }
        }
        else
        {
            int temp = n - i + 1, pmet = 2 * (n - i + 1) - 2;
            for (int s = 1; s <= i - (n / 2); s++)
            {
                cout << "\t";
            }
            for (int k = 2 * (n - i) + 1; k > 0; k--)
            {
                while (temp <= 2 * (n - i + 1) - 1)
                {
                    cout << temp++ << "\t";
                }
                while (temp > 2 * (n - i + 1) - 1 && pmet >= n - i + 1)
                {
                    cout << pmet-- << "\t";
                }
            }
        }
        cout << endl;
    }
}
