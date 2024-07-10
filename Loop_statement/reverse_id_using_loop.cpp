//Write a program that reverses your ID.


#include<bits/stdc++.h>
using namespace std;

int main(){
    int id,rem,sum=0;
    cout << "Enter your student id: " << endl;
    cin >> id;
    for(int i = id; id != 0; id = id/10){
        rem = id % 10;
        sum = sum * 10 + rem;
    }
    cout << sum;
    return 0;
}

/* lets say input is 21. So, 21 stored in i. Initial value of i is 21. then it goes to next step where 
21 % 10 = 1. 1 stored in rem variable. Initial value of sum = 0. After that rem = 1 adds with sum and we print 1.....Then...on the next step 21 / 10 = 2. 2 % 10 = 2 and 2 adds with where value of sum is 1..and it prints 12*/   