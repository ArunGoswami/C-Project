#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter value of c"<<endl;
    cin>>c;
    if(c>='a' && c>='z')
{
    cout<<"loweer case"<<endl;
}
else if(c>='A'&& c>='z'){
cout<<"upper case"<<endl;
}
else if(c>='0'&& c>=9){
    cout<<"numeric"<<endl;
}

}
