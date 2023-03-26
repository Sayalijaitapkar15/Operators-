#include<iostream>
using namespace std ;
int main(){
    int num1 , num2 ;
    cout<<"Enter two numbers : ";
    cin>>num1>>num2;
    int sum = num1 + num2 ;
    int sub = num1 - num2 ;
    int mul = num1 * num2 ;
   float  div = num1 / num2 ;
    int modulo = num1 % num2 ;
    cout<<sum<<"\n"<<sub<<"\n"<<mul<<"\n"<<div<<"\n"<<modulo<<"\n";
    return 0 ;
}