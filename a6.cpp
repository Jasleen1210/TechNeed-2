#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Odd Input";
    cin >> n;
    for(int i=1; i<=n; i++){
        if(i<=(n/2)+1){
            for(int j= (n/2)-i+2; j>0 ;j--){
                cout<<"x";
            }
            for(int s=2*i-1; s>0; s--){
                cout<<" ";
            }
            for(int j= (n/2)-i+2; j>0 ;j--){
                cout<<"x";
            }
        }
        else{
            for(int j=(n/2)-(n-i+1)+2; j>0 ;j--){
                cout<<"x";
            }
            for(int s=2*(n-i+1)-1; s>0; s--){
                cout<<" ";
            }
            for(int j= (n/2)-(n-i+1)+2; j>0 ;j--){
                cout<<"x";
            }
            }
        cout<<endl;
    }
}
