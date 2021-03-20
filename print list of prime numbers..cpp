#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        int c=0;
        for(int j=1;j<=i/2;j++){
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==1){
            cout<<i<<" ";
        }
    }
    return 0;
}
