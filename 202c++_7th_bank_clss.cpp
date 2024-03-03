#include<iostream>
using namespace std;
class bank{
    public:
    string accout_holder_name;
    long account_number;
    long current_balance;
    long balance_aft_tran;
    long balance_aft_tran2;
    long end_balance;
    double interest;
    void input();
    void display();
    void transaction();
    void calu_interest();
};
void  bank::input(){
    cout<<"Enter account Holder full name: ";
    cin >> accout_holder_name;
    cout<<"Enter acount number: ";
    cin >> account_number;
    cout<<"Enter current balance(enter more than 1 lakh)";
    cin>> current_balance;
}

void bank::transaction(){
    long witdraw_amount=0;
    long witdraw_amount2=0;
    cout <<"enter amount you want to widraw";
    cin >> witdraw_amount;
    balance_aft_tran = current_balance - witdraw_amount;
    cout <<"enter amount you want to widraw second time";
    cin >> witdraw_amount2;
    balance_aft_tran2 = balance_aft_tran - witdraw_amount2;
}
void bank::calu_interest(){
    interest = balance_aft_tran2*10/100;
    end_balance = balance_aft_tran2 - interest;

}

void  bank::display(){
    input();
    transaction();
    calu_interest();
    cout<<"Account Holder Name: " << accout_holder_name <<endl;
    cout<<"Account Number is: " << account_number << endl;
    cout<<"Account Current balance is: " << current_balance << endl;
    cout<<"Account balance after first tranction: " << balance_aft_tran <<endl;
    cout<<"Account balance after second tranction: " << balance_aft_tran2 <<endl;
    cout<<"Your rate of interst is 10% and amount is: " << interest <<endl;
    cout <<"Your balance after some transaction and interest is :" <<end_balance;
 }

 int main(){
    bank b1;
    b1.display();
    return 0;

 }
