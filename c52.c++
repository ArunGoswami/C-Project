#include<iostream>
using namespace std;
vector<int> ans;
int n=0, m=0;
int ans = 0;
while (n<i && m<j)
{
    if(arr1[n] == arr2[m]){
        ans.push_back(arr[n]);
        n++;
        m++;
    }
    else if(arr1[n] < arr2[m]){
        n++;
    }
    else
    {
        m++;
    }
    return ans;
}
