#include <iostream>
using namespace std;

int main()
{    
    int n;
    cout << "Input";
    cin >> n;
    int a=0, b=1, k, r=0, temp=n;
    int arr[((n*n)/2)]={0,1};
    for(int i=0; i<((n*n)/2); i++)
    {
    k= b + a; 
    a=b;  
    b = k; 
     
    arr[i+2]=k;
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout <<arr[r]<<"\t";
            r++;
            
        }
        cout << endl;
    }
    
}