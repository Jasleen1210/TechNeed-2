#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Input";
    cin >> n;
    if(n>10 ||n<1){
        cout<<"Error";
    }
    else{
        for(int i=1; i<11 ;i++){
            cout<<n<<"x"<<i<<"="<<n*i<<endl;
        }
    }

    
}