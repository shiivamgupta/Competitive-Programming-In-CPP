#include <iostream>
using namespace std;

int main()
{
    int n=5,k=0;
    for(int i=1;i<=9;i++)
    {
        i<6?k++:k--;
        for(int j=1;j<=9;j++){
            if(j>=(6-k) &&(j<=4+k))
                printf("%d",k);
            else
                printf(" ");
        }
        printf("\n");
    }
   return 0;
}
