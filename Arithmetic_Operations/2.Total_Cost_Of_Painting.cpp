// You want to paint your room. The cost of per litre paint is Taka 525 and a litre of
// paint covers 10.25 sq feet. You know the length and breadth of your room. Can
// you write a program to find the total cost of painting your room?

#include<iostream>
// using namespace std;


int main(){
    double l,w,sqFeet,totalSqFeet,total;
    std::cout << "Enter length & width of your room: ";
    std::cin >> l >> w;
    sqFeet = l * w;
    totalSqFeet = sqFeet / 10.25;
    total = totalSqFeet * 525;
    std::cout << "Total cost of painting: " << total << std::endl;
    return 0;
}