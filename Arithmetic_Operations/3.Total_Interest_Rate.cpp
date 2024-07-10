/*Mr. Khan is a busy businessman. He has 5 savings accounts in 5 different banks.
He receives a rate of 2.545 %, 2.165%, 3.521%, 3.82 % and 2.91 % interest per
annum respectively from each bank. He stored Taka 101000.50 in each account.
Write a program to calculate his total interest on 5 accounts after 2 years.*/

#include<iostream>

int main(){
    double total=0,amount=101000.50;
    total += ((2.545/100) * amount)*2 + amount;
    total += ((2.165/100) * amount)*2 + amount;
    total += ((3.521/100) * amount)*2 + amount;
    total += ((3.82/100) * amount)*2 + amount;
    total += ((2.91/100) * amount)*2 + amount;
    std::cout << "Total interest: " << total << std::endl;
    return 0;
}

