/*Write a program that keeps taking user input until the user enters an odd number.
The program will stop taking input and print the sum of all the inputted numbers.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,sum=0;
    while (1)
    {
        cin >> a;
        sum += a;
        if(a%2 == 1){
            break;
        }        
    }
    cout << sum;
    
}