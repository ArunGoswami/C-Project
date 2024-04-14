#include<iostream>
#include<math.h>
using namespace std;
 
int main()
{
    int n=0;
    cin>>n;
    int m=n;
    int mask=0;

    while (n!=0)
    {
        mask= (mask<<1)|1;
        m=m >> 1;
    }
    int ans= (~n)& mask;
    return ans;
    
}