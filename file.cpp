#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

int main(){
    int a,b;
    cout<<"Enter a: "<<endl;
    cin>>a;

    cout<<"Enter b: "<<endl;
    cin>>b;
    
    cout<<add(a,b)<<endl;

    return 0;
}