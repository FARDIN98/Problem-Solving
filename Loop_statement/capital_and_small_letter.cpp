/*Write a program that asks the user to input 1 or 2, if the user inputs 1, the program
will print A,B,C,D,E,F…...Z. If the user inputs 2, the program will print a,b,c,d,e,f…..z*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1,count;
    cout << "Enter 1 or 2" << endl;
    cin >> num1;
    count = (num1==1)? 'A' : 'a';
    // if(num1 == 1){
        for (int i = 0; i < 26; i++)
        {
            // we used ascii value to print A to Z.... Here we do type casting in order to print character
            // printf("%c ", 'A' + i);
            cout << (char) (i + count) << " ";
        }        
}