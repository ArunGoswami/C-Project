#include<iostream>
using namespace std;
{
    vector<int> ans;
    for(int i=0; i<arr.size; i++)
    {
        for(int j=0; j<arr.size; j++)
        {
            if(arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(min(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
        short(begin(),ans.end());
    return ans;
    }
}