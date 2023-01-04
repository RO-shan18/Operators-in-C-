/* Programmer =  Roshan Mehra
Purpose = Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number.
Date = 21/10/2022  */

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter five digit number: "<<endl;
    cin>>number;

    number = number/10;
    int secondlast_digit = number%10;

    number = number/10;
    number = number/10;
    number = number/10;
    int first_digit = number%10;
 
    int sum = secondlast_digit + first_digit;
    cout<<"Sum of first and second last digit: "<<sum;
    
    return 0;
}