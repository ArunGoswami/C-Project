#include<iostream>
using namespace std;

int squareroot(int n) {
    int s=0;
    int e=n;
    int ans=-1;
    while (s<=e) {
        int mid = s+(e-s)/2;
        int square=mid*mid;
        if(square==n) {
            return mid;
        }
        else if(square<n) {
            s=mid+1;
            ans=mid;
        }
        else {
            e=mid-1;
        }
    }
    return ans;
}

int main() {
    int n = 25;
    int result = squareroot(n);
    cout<<"square root of "<<n<<" = "<<result<<endl;
    return 0;
}

