/*- Write a program to calculate the sum of digits of a 3 digit number.*/

#include<iostream>
using namespace std ;
int main(){
    int number ;
    cout<<"Enter a three digit number : ";
    cin>>number ;
    int first = number / 100;
    int second = (number % 100)/10 ;
    int last = number % 10 ;
     cout<<first + second + last ;
   
    return 0 ;
}