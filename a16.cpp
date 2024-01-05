#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Input";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for(int s= 2*n-2*i-1; s>0; s--){
            cout<<' ';
        }
        if(i==n){
        for (int j = i-1; j > 0; j--)
        {
            cout << j;
        }
        }
        else{
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }}
        cout<<endl;
        }
}