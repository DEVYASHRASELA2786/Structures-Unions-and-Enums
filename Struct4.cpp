// Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a 
// structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and 
// then display the percentage of each student.

#include<iostream>
using namespace std;

struct student { //Defigned Structure Data type 
    int rollno;
    string name;
    float chem_marks;
    float maths_marks;
    float phy_marks;
    float percnt;
}stu[100];

//Function Calculate Percentage of Students.
void percentage( int i , float a , float b ,float c ){
    stu[i].percnt=( ( ( a + b + c ) / 300 ) * 100 );
}


int main(){
    //Taking number of students as an input form the user.

    int stu_num;
    cout << "Number of students: " ;
    cin >> stu_num;

    // Taking Student Details.

    for( int i=0 ; i < stu_num ; i++){

        cout << "Input Roll Number: ";
        cin >> stu[i].rollno;
    
        cout << "Input Name: ";
        cin >> stu[i].name;
        
        cout << "Input Chemistry Marks: ";
        cin >> stu[i].chem_marks;
       
        cout << "Input Maths Marks: ";
        cin >> stu[i].maths_marks;
        
        cout << "Input Physics Marks: ";
        cin >> stu[i].phy_marks;

        percentage(i , stu[i].chem_marks , stu[i].maths_marks , stu[i].phy_marks );
    }

    // Display Details.
    for( int j = 0 ; j < stu_num ; j++ ){
        cout << stu[j].rollno << " " << stu[j].name << " " << stu[j].percnt << "%" << endl ; 
    }
    return 0;
}