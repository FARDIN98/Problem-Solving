/*Write a program that takes two characters as input and print all the characters
between them.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    char first, last,count=0;
    cout << "Enter two character: " << endl;
    cin >> first >> last;
    for (char i = first + 1; i < last; i++)
    {
        cout <<(char) (count + i) << " " ;
    } 
}

// input : a e
// output : b c d