#include<iostream>
using namespace std;

int main(){
    // Initiating 4 variables
    int a,b,h,area;
    // Taking inputs
    cin >> a >> b >> h;
    // using formula of the area of trapezoid
    area = (a+b)*h/2;
    cout << area << endl;  
}