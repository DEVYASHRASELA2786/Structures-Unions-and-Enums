// Write a structure to store the name, account number and balance of customers (more than 10) and store their information.
// 1 - Write a function to print the names of all the customers having balance less than $200.
// 2 - Write a function to add $100 in the balance of all the customers having more than $1000 in their balance and then print the incremented value of their balance.

#include<iostream>
using namespace std;

int number;

struct customers{
    string name;
    long int account_no;
    int balance;
}accunt[20];

void balance_check(){
    cout<<"Customer With balance less then $200 are: "<<endl;
    int j=0;
    for(int i=0;i<number;i++){
        if(accunt[i].balance<200){
            cout <<j+1<<": "<<accunt[i].name << endl ;
            j++;
        }
        else{
            continue;
        }
    }
}

void increment(){
    cout<<"Customers with balance more than $1000: \n";
    for(int i=0;i<number;i++){
        if(accunt[i].balance>1000){
            cout << accunt[i].name <<" "<< accunt[i].account_no << " " << "Current Balance: " <<accunt[i].balance ;  
            accunt[i].balance+=100;
            cout <<" Incremented Balance: "<< accunt[i].balance << endl ;
        }
        else{
            continue;
        }
    }
}



int main(){
    cout<<"Number of customers: ";
    cin>>number;
    for(int i=0;i<number;i++){
        cout<<"Enter Name: ";
        cin>>accunt[i].name;
        
        cout<<"Enter Account Number: ";
        cin>>accunt[i].account_no;
        
        cout<<"Enter Balance: ";
        cin>>accunt[i].balance;

    }
    balance_check();
    increment();
    return 0;
}