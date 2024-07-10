/*Write a program that takes the length and breadth of a rectangle and print the
perimeter*/

#include<iostream>
using namespace std;

int main(){
    double l, w, p;
    cout << "Enter Length of rectangle: ";
    cin >> l;
    cout << "Enter width of rectangle: ";
    cin >> w;
    p = 2*(l + w);
    cout << "Perimeter of rectangle: " << p;
    return 0;
}