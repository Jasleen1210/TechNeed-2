#include <iostream>
//		*
//	*		*	2 2i-1
//*			   *3
//	*		*	2
//		*
using namespace std;
int main()
{
    int n;
    cout << "Odd Input";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i <= (n / 2) + 1)
        {
            for (int s = (n / 2) - i + 1; s > 0; s--)
            {
                cout << '\t';
            }
            cout << "*\t";
            if (i != 1)
            {  
                for (int s = 2*i-3; s >0 ; s--)
                {
                    cout << "\t";
                }
                cout << "*\t";
            }
            
        }

else
        {
            for (int s = (n / 2) - (n - i + 1) + 1; s > 0; s--)
            {
                cout << '\t';
            }
            cout << "*\t";
            if (i != n)
            {
                for (int s = 2*(n-i+1)-3; s >0 ; s--)
                {
                    cout << "\t";
                }
                cout << "*\t";
            }
        }
        cout << endl;
    }
}
