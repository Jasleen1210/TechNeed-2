//wrong
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Odd Input";
    cin >> n;
    for(int i=1; i<=n ; i++){
        if(i< n/2+1){
            for(int j=n/2; j>0 ; j--){
                cout<< "\t";
            }
            cout<<"*\t";
            for (int j = 1; j<i; j++){cout << "*\t";}
        }
        else if(i==n/2+1){
            for(int k=n; k>0; k--){
                cout<<"*\t";
            }
        }
        else{
            for(int j=n/2; j>0 ; j--){
                cout<< "\t";
            }
            cout<<"*\t";
            for (int j = 1; j<n-i+1; j++){ cout<<"*\t";}

        }

    cout<<endl;
    }
    }