#include<iostream>
using namespace std;
void fibo(int n){
    unsigned int t1=0,t2=1,next;
    for(int i=1;i<=n;i++){
        cout<<t1<<" ";
        next=t1+t2;
        t1=t2;
        t2=next;

    }
}
int main(){
    fibo(100);
    Xyz;
    
}
