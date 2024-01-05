#include <iostream>
using namespace std;
int main()
// _  _   *       1
// _  *   *   *   2
// *  *   *   *   *   3
// _  *   *   *   4
// _  _   *
{
    int n;
    cout << "Odd Input";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i <= (n / 2) + 1)
        {
            for (int s = (n / 2) - i +1; s >= 0; s--)
            {
                cout << " ";
            }

            for (int k = 1; k <= 2 * i - 1; k++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int s = 1; s <= i- (n / 2) ; s++)
            {
                cout << " ";
            }
            for (int k = 2 * (n - i) + 1; k > 0; k--)
            {
                cout << "*";
            }
        }
        cout<<endl;
    }
    
}
