#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("love");
    s.push("babbar");
    s.push("kumar");
    cout<<"element:"<<s.top()<<endl;
    s.pop();
     cout<<"element:"<<s.top()<<endl;
}
