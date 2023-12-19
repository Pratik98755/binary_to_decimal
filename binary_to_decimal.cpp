#include<iostream>
#include<math.h>
using namespace std;


int main(){
    
    cout<<"binary number plz: ";
    int bn;
    cin>>bn;
    int decimal=0;
    int n=0;
    while(bn!=0){
        
        int last_digit;
        last_digit=bn%10;
        bn=bn/10;

        decimal=decimal+(last_digit*pow(2,n));
        n+=1;
        
    }
    cout<<decimal;
    
    return 0;
}