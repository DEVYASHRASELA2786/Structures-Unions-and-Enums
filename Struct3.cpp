// Write a program to add two distances in inch-feet using structure. The values of the distances is to be taken from the user.
#include<iostream>
using namespace std;

struct length{
    int feet;
    int inch;
}l[2];

struct length add(struct length a, struct length b){
    struct length ans;
    ans.feet = a.feet + b.feet ;
    if((a.inch + b.inch)>=12){
        ans.feet=(ans.feet+((a.inch + b.inch)/12));
        ans.inch=((a.inch + b.inch)-12);
    }
    else{
        ans.inch=(a.inch + b.inch);
    }
    return ans;
}

int main(){
    for( int i = 0 ; i < 2 ; i++ ){
        cout << "Input Dist " << i+1 << " in Feet: "; 
        cin >> l[i].feet ;
        cout << "Input Dist " << i+1 << " in inch: "; 
        cin >> l[i].inch ;
    }
    struct length ans=add(l[0],l[1]);
    if(ans.inch==0){
        cout << ans.feet << " FT";
    }
    else{
        cout << ans.feet << " FT " << ans.inch << " Inch ";
    }
    return 0;
}