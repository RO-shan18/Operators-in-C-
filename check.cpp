/* Programmer =  Roshan Mehra
Purpose = /*Q2 - Write a program to take the values of two variables a and b from the keyboard and then check If both the conditions 'a < 50' and 'a < b' are true.
Date = 21/10/2022   */

#include<iostream>
using namespace std;

int main(){
     
    int a , b;

    cout<<"Enter values in number: "<<endl;
    cin>>a>>b;

   a<50 && a<b? cout<<1 : cout<<0;

     return 0;
}