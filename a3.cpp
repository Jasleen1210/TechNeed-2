#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Input";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int s = n; s >= i; s--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}