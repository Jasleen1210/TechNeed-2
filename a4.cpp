#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Input";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= i; s++)
        {
            cout << " ";
        }
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}