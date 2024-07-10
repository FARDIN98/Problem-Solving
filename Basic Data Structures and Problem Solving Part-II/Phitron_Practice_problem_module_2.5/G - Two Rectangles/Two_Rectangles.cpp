#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;

    cin >> a >> b >> c >> d;

    int rect1 = a*b;
    int rect2 = c*d;

    if(rect1 >= rect2){
        cout << rect1;
    }else{
        cout << rect2;
    }
}