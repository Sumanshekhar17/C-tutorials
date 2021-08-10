#include<iostream>
using namespace std;

int main(){
    cout<<"Enter four Integers\n";

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(a%2==0){
        cout<<"a is even"<<endl; 
    }
    else{
        cout<<"a is odd"<<endl;
    }

    if(b%2==0){
        cout<<"b is even"<<endl; 
    }
    else{
        cout<<"b is odd"<<endl;
    }

    if(c%2==0){
        cout<<"c is even"<<endl; 
    }
    else{
        cout<<"c is odd"<<endl;
    }

    if(d%2==0){
        cout<<"d is even"<<endl; 
    }
    else{
        cout<<"d is odd"<<endl;
    }

    return 0;


}