/*(Printing) Write a program that prints the numbers 1 to 4
on the same line with each pair of adjacent numbers separated
by one space. Do this several ways:
A. Using one statement with one stream insertion operator.
B. Using one statement with four stream insertion
operators.
C. Using four statements. (c++ how to program)*/
// program print numbers on three ways
#include <iostream>
using namespace std ;
int main () {

    // part A 
    cout << " 1 2 3 4 \n" ;
    //part B
    cout << " 1"  << " 2" << " 3" << " 4 \n";
    // part c 
    cout << " 1 " ;
    cout << "2 " ;
    cout << "3 " ;
    cout << "4 \n" ;

}