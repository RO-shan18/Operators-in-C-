/* Programmer =  Roshan Mehra
Purpose = Q6 - Design a calculator to perform basic arithmetic operations (+,-,/,*,%)
Date = 21/10/2022 */

#include<iostream>
using namespace std;

int main(){
    int number1 , number2;
    cout<<"Enter two numbers: "<<endl;
    cin>>number1>>number2;

    cout<<"Addition:       "<<number1 + number2<<endl;
    cout<<"Subtraction:    "<<number1 - number2<<endl;
    cout<<"Multiplication: "<<number1 * number2<<endl;
    cout<<"Division:       "<<(float)number1/number2<<endl;

    return 0;
}