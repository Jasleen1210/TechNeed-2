
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Input";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i-1; j++)
        {
            cout << "\t";
        }
        cout << "*\n";
    }
}