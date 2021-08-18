#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number that you want to check"<<endl;
    int n;
    cin>>n;
    for(int i = 2; i<=n-1; i++){
        if(n%i == 0){
            cout<<"The number is not a prime"<<endl;
            break; 
        }
    }
    return 0;
}