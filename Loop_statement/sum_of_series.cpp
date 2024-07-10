// Write a program that prints 3+9+27+81+243 +....+59043 = ? ( you should print the
// sum in the end)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum=0, a=3;
    for(int i=1; i < 11; i++){   //i means power
        int temp = 1;
        for (int j = 1; j <= i; j++)   //j means how many times we need to  multiply a
        {
            temp *= a;
        }
        if(i < 10)           // just to avoid extra '+' sign
            cout << temp << " + ";
        else
            cout << temp;
        sum += temp;         
    }
    cout << "\nsum: " << sum;
    return 0;
}