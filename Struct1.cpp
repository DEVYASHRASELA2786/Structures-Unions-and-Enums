// Write a program to store and print the roll no., name , age and marks of a student using structures.
#include<iostream>
using namespace std;
struct student{
    int roll_no;
    string name;
    int age;
    int marks;
};

// int main(){
//   struct student Pratham ; //Taking Example of Pratham.
//   Pratham.roll_no = 01 ;
//   Pratham.name = "Pratham" ;
//   Pratham.age = 18 ;
//   Pratham.marks = 100 ;
//   cout<<Pratham.roll_no<<endl;
//   cout<<Pratham.name<<endl;
//   cout<<Pratham.age<<endl;
//   cout<<Pratham.marks<<endl;
//   return 0;
// }

int main(){
    struct student Pratham = { 01 , "Pratham" , 18 , 100 } ;
    cout << Pratham.roll_no << " " << Pratham.name << " " << Pratham.age << " " << Pratham.marks ;
}