// Write a program to compare two dates entered by user. 
// Make a structure named Date to store the elements day, 
// month and year to store the dates. If the dates are equal, 
// display "Dates are equal" otherwise display "Dates are not equal".

#include<iostream>
using namespace std;

string serial[]={"First","Second"};

struct date{
    int day;
    int month;
    int year;
}d[2];

void day(int j){
    cout<<"Insert "<<serial[j]<<endl<<"Day: ";
    cin>>d[j].day;
    if( d[j].day<=0 || d[j].day>=31){
        cout<< " Invalid Day! " << endl;
        day(j);
    }
}

void month(int j){
    cout<<"Insert "<< serial[j] << endl <<"Month: ";
    cin>>d[j].month;
    if(d[j].month<1 || d[j].month>12){
        cout<<"Invalid Month" << endl;
        month(j);
    }
}

void year(int j){
    cout<<"Insert "<< serial[j] << endl << "Year: ";
    cin>>d[j].year;
    if(d[j].year<1000 || d[j].year>9999){
        cout<< "Invalid Year" << endl;
        year(j);
    }
}
int main(){
    for(int i=0;i<2;i++){
        day(i);
        month(i);
        year(i);
    }
    if((d[0].day==d[1].day) && (d[0].month==d[1].month) && (d[0].year==d[1].year)){
        cout<<"Dates are Equal.";
    }
    else{
        cout<<"Dates are not Equal.";
    }
    return 0;
}