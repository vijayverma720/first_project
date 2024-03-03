#include<iostream>
using namespace std;
void pat(int n){
    if(n==0){
        return;
    }
    
    cout << "*";
    pat(n-1);
}
void output(int n){
    if(n==0){
        return;
    }
    pat(n);
    cout <<endl;
    output(n-1);
}
int main(){
    int n=3;
    output(n);
    return 0;
    
}