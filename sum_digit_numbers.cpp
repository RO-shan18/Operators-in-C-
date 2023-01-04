/* Programmer =  Roshan Mehra
Purpose = Q5 - Write a program to calculate the sum of digits of a 3 digit number
Date = 21/10/2022  */

#include<iostream>
using namespace std;

int main(){
     int num;
     
     cout<<"Enter three digit number: "<<endl;
     cin>>num;

     int third_digit = num % 10;
     num = num/10;

     int second_digit= num % 10;
     num = num/10;

     int first_digit = num % 10;

     int sum_digit =  first_digit + second_digit + third_digit;
     cout<<"Sum of the three digits: "<<sum_digit;
     return 0;
}