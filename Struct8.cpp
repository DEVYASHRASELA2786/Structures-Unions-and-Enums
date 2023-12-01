/* Write a structure to store the names, hours and hours of work per day of 10 employees in a company. 
Write a program to increase the hours depending on the number of hours of work per day as 
follows and then print the name of all the employees along with their final salaries.
Hours of work per day	8	 10	   >=12
Increase in hours	   $50	 $100  $150 */

#include <iostream>
using namespace std;

struct employee{
    string name;
    float salary;
    int hours;
}emp[10];
void increment(){
    cout << "After Updating Salary:-\n";
     for(int i=0;i<10;i++){
        if((emp[i].hours>=8) && (emp[i].hours<10)){
            emp[i].salary+=50;
            cout<< emp[i].name <<" " << emp[i].salary << endl;
        }
        else if((emp[i].hours>=10) && (emp[i].hours<12)){
            emp[i].salary+=100;
            cout<< emp[i].name <<" " << emp[i].salary << endl;
        }
        else if(emp[i].hours>=12){
            emp[i].salary+=150;
            cout<< emp[i].name <<" " << emp[i].salary << endl;
        }
        else{
            cout<< emp[i].name <<" " << emp[i].salary << endl;
        }
    }
}
int main(){
    string ordi[]={"First","Second","Third","Fourth","Fifth","Sixth","Seventh","Eighth","Ninth","Tenth"};
    for(int i=0;i<10;i++){
        cout<<"Insert details of "<<ordi[i]<<" employee:-"<<endl;
        cout<<"Name: ";
        cin>>emp[i].name;
        cout<< "Salary: ";
        cin>>emp[i].salary;
        cout<<"Hours of Work: ";
        cin>>emp[i].hours;
    }
    increment();
    return 0;
}