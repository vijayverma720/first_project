#include<iostream>
#include<math.h>
using namespace std;
class result{
    public:
    int n;
    int sum=0;
    void input();
    void operation();
    void display();
};

void result::input(){
    cout <<"Enter any value: ";
    cin>>n;
}

void result::operation(){
    
    for(int  i=1; i<=n; i++){
        
        sum = sum+i*i;
    }
}

void result::display(){
    input();
    operation();
    cout<<"The sum of Square of first n natural number is :" << sum;
}

int main(){
    result n1;
    n1.display();
    return 0;
}