// Write a program that finds the second largest number between 3 numbers

#include<bits/stdc++.h>
using namespace std;

int main(){
    double num1,num2,num3;
    // Printing message
    cout << "Enter 3 number: ";
    // Taking input
    cin >> num1 >> num2 >> num3;
    // checking if num1 is largest
    if(num1 > num2 && num1 > num3){
        // checking 2nd largest number
        if(num2 > num3){
            cout << num2 <<" is the 2nd largest number" << endl;
        }
        else{
            cout << num3 << " is the 2nd largest number" << endl;
        }
    }
    // checking if 2nd number is largest
    if(num2 > num3 && num2 > num1){
        // now checking the 2nd second argest number
        if(num1 > num3){
            cout << num1 <<" is the 2nd largest number" << endl;
        }
        else{
            cout << num3 <<" is the 2nd largest number" << endl;
        }
    }
    // checking if 3rd number is largest
    if(num3 > num1 && num3 > num2){
        // now checking the 2nd largest number
        if(num1 > num2){
            cout << num1 <<" is the 2nd largest number" << endl;
        }
        else{
            cout << num2 <<" is the 2nd largest number" << endl;
        }
    }
    return 0;
}