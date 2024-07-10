/*Write a program that takes user inputs to find the area and circumference of a
circle. */

#include<iostream>
#include<cmath>

int main(){
    double r,area,circumference;
    std::cout << "Enter the radius of circle: " << std::endl;
    std::cin >> r;
    area = 3.1416 * pow(r,2);
    circumference = 2 * 3.1416 * r;
    std::cout <<"Area of circle " << area << std::endl;
    std::cout <<"Circumference of circle: " << circumference;
    return 0; 
}