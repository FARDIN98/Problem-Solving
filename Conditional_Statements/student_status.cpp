/* Write a program that takes take your earned credit as input and print print your
student status according to the table */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    // taking input
    cout << "credits earned: ";
    cin >> num;
    
    if(num < 0){
        cout << "Invalid credit!!!!...Please give proper credit number" << endl; 
    }
    else{
       // checking status between 0 to 29
       if(num <= 29){
           cout << "Freshman" << endl;
       }
       // checking status between 0 to 59 
       else if(num <= 59){
           cout << "Sophomore" << endl;
       }
       // checking status between 0 to 89
       else if(num <= 89){
           cout << "Junior" << endl;
       }
       // checking status between 0 to 90
       else if(num >= 90){
           cout << "Senior" << endl;
       }
    }
    return 0;
}