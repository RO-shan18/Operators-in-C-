/* Programmer =  Roshan Mehra
Purpose = Q3 - There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many girls received grades "A" if 17 boys made up 80% of the students that received grades "A".
Date = 21/10/2022  */

#include<iostream>
using namespace std;

int main(){
     int no_of_students;
     cout<<"Enter no.of students: "<<endl;
     cin>>no_of_students;

     int boys = 25;
     int A_gradeboys = 17;

     int A_gradegirls;
     float A_gradestud = (80*no_of_students)/100;
     A_gradegirls = A_gradestud - A_gradeboys;
     cout<<"No of girls received grades 'A' are: "<<A_gradegirls;


    return 0;
}