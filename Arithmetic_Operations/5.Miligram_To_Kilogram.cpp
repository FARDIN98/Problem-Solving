/*Write a program that weighs your weight in milligram and convert it into kilogram,
gram and milligram. For example, if your weight is 50020000 mg, your program
will print 50 KG 20 gm and 0 mg*/

#include<iostream>

int main(){
    int mg,mgCarry,gmCarry;
    int kg,gm;
    std::cout << "Enter milligram: ";
    std::cin >> mg;
    mgCarry = mg%1000;
    mg -= mgCarry;
    gm = mg/1000;
    gmCarry = gm%1000;
    gm -= gmCarry;
    kg = gm/1000;
    std::cout << kg <<" KG " << gmCarry << " GM " << mgCarry << " mg ";
    return 0;
}