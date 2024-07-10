// Write a program that checks if your ID is odd or even

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout << "Enter your student id:";
    cin >> num;
    if(num % 2 == 0){
        cout << "Your Id is even";
    }
    else{
        cout << "Your Id is odd";
    }
    return 0;
}