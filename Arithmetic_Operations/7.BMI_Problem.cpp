/*BMI Problems: https://www.codestepbystep.com/problem/view/cpp/parameters/BMI*/

#include<bits/stdc++.h>
using namespace std;

double bmi(double height, double weight){
    return (weight/(height*height))*703;
}

int category(double bmi){
    if(bmi < 18.5){
        return 1;
    }else if(bmi < 24.9){
        return 2;
    }else if(bmi < 29.9){
        return 3;
    }else{
        return 4;
    }
}

int main(){
    // freopen("in.txt","r",stdin);
    cout << "This program reads data for two people" << endl << "and computes their body mass index (BMI)." << endl << endl;
    double height,weight,bmiValue1,bmiValue2,bmiDifference;
    cout << "Enter Person 1's information: ";
    // cin >> height >>weight;
    cout << "\nheight (in inches)? ";
    // printf("%.1lf\n", height);
    cin >> height;
    cout << "weight (in pounds)? ";
    cin >> weight;
    bmiValue1 = bmi(height,weight);
    int className1 = category(bmiValue1);
    cout << "BMI = " << bmiValue1 << ", class " << className1 << endl;


    cout << "\nEnter Person 2's information: ";
    // cin >> height >>weight;
    cout << "\nheight (in inches)? ";
    // printf("%.1lf\n", height);
    cin >> height;
    cout << "weight (in pounds)? ";
    cin >> weight;
    bmiValue2 = bmi(height,weight);
    int className2 = category(bmiValue2);
    cout << "BMI = " << bmiValue2 << ", class " << className2 << endl;

    if(bmiValue1 > bmiValue2)
        bmiDifference = bmiValue1 - bmiValue2;
    else 
        bmiDifference = bmiValue2 - bmiValue1;

    cout << "\nBMI difference = " << bmiDifference;
    return 0;
}