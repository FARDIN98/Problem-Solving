/*6. Write a program that remerses a 2 digit positive number without using any loop.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,rem;
    cout << "Enter an Integer: ";
    cin >> a;
    rem = a % 10;   //21 % 10 = 1 [rem =1]
    rem = rem*10;   // 1 * 10 = 10
    a = a/10;  //21 / 10 = 2 [a=21]
    rem = rem + a;  // 10 + 2 = 12
    return 0;
}
