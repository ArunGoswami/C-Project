#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="a";
     m[2]="b";
      m[3]="c";

      for(auto i:m){
        cout<<i.first<<endl;
      }
    }
