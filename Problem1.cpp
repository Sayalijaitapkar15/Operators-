/* Write a program to check whether two numbers (entered by user) are equal or not. */
#include<iostream>
using namespace std ;
int main(){
int num1 , num2 ;
cout<<"Enter two numbers : ";
cin>>num1>>num2;
int answer = num1==num2 ? 1: 0 ;
cout<<answer;
return 0 ;
}
