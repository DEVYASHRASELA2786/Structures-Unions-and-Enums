#include<iostream>
using namespace std;

struct employee{
    int eID;
    char favchar;
    long double salary;
};

int main(){
    struct employee Dev;
    Dev.eID=1;
    Dev.favchar='D';
    Dev.salary=1200000;
    cout<<Dev.eID<<endl;
    cout<<Dev.favchar<<endl;
    cout<<Dev.salary<<endl;
    return 0;
}