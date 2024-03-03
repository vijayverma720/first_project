#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll_no;
    double marks1;
    double marks2;
    double per;
    void input();
    void display();
    void condition();
};
void student::input(){
    cout<<"enter Your name :";
    cin >> name;
    cout<<"enter Your roll no";
    cin >>roll_no;
    cout <<"enter your marks in subject english";
    cin >> marks1;
    cout <<"enter your marks in subject math";
    cin >> marks2; 
    }
void student:: condition(){
    per = (marks1+marks2)/200*100;
    if(per>80){
        cout <<"first" ;
    }
    else if(per>75){
        cout <<"second";
    }
    else if(per>40){
        cout <<"third" ;
    }
    else{
        cout <<"cout";
    }
}

void student::display(){
    input();
    cout <<"Sutdent detail : Name " << name <<"roll number"<<roll_no << endl;
    cout <<"grade";
    condition();
    cout <<endl;
}

int main(){
    student s1, s2;
    s1.display();
    s2.display();
    return 0;
}

// now with parameter and argurnment in function
/*
#include<iostream>
using namespace std;

class student {
public:
    string name;
    int roll_no;
    double marks1;
    double marks2;
    double per;
    void input(string n, int r, double m1, double m2);
    void display();
    void condition(double m1, double m2);
};

void student::input(string n, int r, double m1, double m2) {
    name = n;
    roll_no = r;
    marks1 = m1;
    marks2 = m2;
}

void student::condition(double m1, double m2) {
    per = (m1 + m2) / 200 * 100;
    if(per > 80) {
        cout << "First";
    }
    else if(per > 75) {
        cout << "Second";
    }
    else if(per > 40) {
        cout << "Third";
    }
    else {
        cout << "Fail";
    }
}

void student::display() {
    cout << "Student detail : Name: " << name << ", Roll number: " << roll_no << endl;
    cout << "Grade: ";
    condition(marks1, marks2);
    cout << endl;
}

int main() {
    student s1, s2;
    s1.input("John", 101, 85, 75);
    s2.input("Alice", 102, 65, 80);
    s1.display();
    s2.display();
    return 0;
}
*/