// Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10). Store the information of the students.
// 1 - Write a function to print the names of all the students having age 14.
// 2 - Write another function to print the names of all the students having even roll no.
// 3 - Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).

#include<iostream>
using namespace std;

int stu_num; // Number Of students 

// Struct variable.
struct student{
    int roll_no;
    string name;
    int age;
    string address;
}stu[50];

void age(int h){
    int a;
    cout << "Insert Age: ";
    cin >> a;
    if(a>=11 && a<=14){
        stu[h].age=a;
    }
    else{
        cout << "Age ranges from 11 - 14 ";
        age(h);
    }
}

void selected_age(){
    int age_stu;
    cout << "Insert age: ";
    cin >> age_stu ;
    for(int i=0 ; i < stu_num ; i++){
        if(stu[i].age==age_stu){
            cout << stu[i].roll_no  << " " << stu[i].name << " " << stu[i].age << " " << stu[i].address << endl;
        }
        else{
            continue;
        }
    }
}

void even_rollno(){
    for(int i=0 ; i<stu_num ; i++){
        if((stu[i].roll_no%2)==0){
            cout << stu[i].roll_no  << " " << stu[i].name << " " << stu[i].age << " " << stu[i].address << endl;
        }
        else{
            continue;
        }
    }
}

void selected_rollno(){
    int a;
    cout << "Input Roll Number: ";
    cin >> a;
    for(int i=0;i<stu_num;i++){
        if(stu[i].roll_no==a){
            cout << stu[i].roll_no  << " " << stu[i].name << " " << stu[i].age << " " << stu[i].address << endl;
        }
        else{
            continue;
        }
    }
}

int main(){
    cout << "Number of Student: ";
    cin >> stu_num ;
    if(stu_num > 50){
        cout << "Number of Students Ranges from o - 50 ";
    }
    else{
        for( int i = 0 ; i < stu_num ; i++ ){
            
            cout << "Insert Roll Number: ";
            cin >> stu[i].roll_no; 
            
            cout << "Insert Name: ";
            cin >> stu[i].name; 

            // Input Age.
            age(i); 
            
            cout << "Insert address: ";
            cin >> stu[i].address; 
        }
    }

    cout<<"-----Select Task Number-----"<<endl;
    cout<<"Insert 1 to check students of selected age group."<<endl;
    cout<<"Insert 2 to check students with even Roll Number."<<endl;
    cout<<"Insert 3 to check student of selected Roll Number."<<endl;
    int task;
    cout<<"Enter task Number: ";
    cin>>task;
    if(task==1){
        selected_age();
    }
    else if(task==2){
        even_rollno();
    }
    else if(task==3){
        selected_rollno();
    }
    else{
        cout<<"Incorrect Choice";
    }
    return 0;
}