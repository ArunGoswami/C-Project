class Solution {

bool isprime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
public:
    int countPrimes(int n) {
        int cnt=0;
     for(int i=2; i<n; i++){     
        if(isprime(i)){
         cnt++;
     }      
     }  
     return cnt; 
    }
};