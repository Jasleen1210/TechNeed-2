#include <iostream>
using namespace std;
int fac(int a){
    int ans=1;
    for(int i=1; i<=a; i++){
        ans*=i;
    }
    return ans;
}
int ncr(int n, int r){
    int ans= fac(n)/(fac(n-r)*fac(r));
    return ans;
}
int main()
{
    // pascal ka pattern= ncr, here icj hoga 

    int n;
    cout << "Input";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            if(i==1 || j==i){
                cout<<'1'<<'\t';
            }
            else{
                cout <<ncr(i-1,j-1)<<'\t';
            }
            
        }
        cout << endl;
    }
}