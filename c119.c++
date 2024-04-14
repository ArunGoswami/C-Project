   #include<iostream>>
   using namespace std;
   int main(){
    int num=5;
    int a=num;
    
    cout<<" a before "<<num<<endl;
    a++;
    cout<<"a after "<<num<<endl;

    int *p=&num;
     cout<<" a before "<<num<<endl;
    (*p)++;
    cout<<"a after "<<num<<endl;

    int *q = p;
    cout<<p<<" _ "<<q<<endl;
    cout<<*p<<" _ "<<*q<<endl;

    //int *t=&1;


    return 0;
   }  