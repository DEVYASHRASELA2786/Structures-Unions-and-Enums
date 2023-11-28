//Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 2.

#include<iostream>
using namespace std;

struct student{
    int roll_no;
    string name;
    int age;
};

int main(){
    struct student stu[5];

    for( int i=0 ; i<=4 ; i++ ){
        cout << "Roll Number: " ;
        cin >> stu[i].roll_no ;
        cout << "Name: " ;
        cin >> stu[i].name ;
        cout << "Age: " ;
        cin >> stu[i].age ;
    }
    cout << "Data inserted Successfully !" << endl;
    
    int j;
    cout << "Enter Roll_Number:" ;
    cin >> j ;
    cout << "Roll No." << " Name" << " Age" << endl ;
    cout << stu[j-1].roll_no << " " << stu[j-1].name << " " << stu[j-1].age << endl ;

    return 0;
}