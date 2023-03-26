#include<iostream>
using namespace std ;
int main(){
    int num ;
    cout<<"Enter a number : ";
    cin>>num ; 
    int first_digit = num / 10000 ;
    int last_digit = num % 10 ;
    int sum = first_digit + last_digit ;
    cout<<sum;
    
    return 0 ;
}