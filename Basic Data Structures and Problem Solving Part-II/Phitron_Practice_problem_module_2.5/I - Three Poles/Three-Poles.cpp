#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;

    cin >> a >> b >> c;

    int pole1 = b - a;
    int pole2 = c - b;

    if(pole1 == pole2){
        cout << "YES";
    }else{
        cout << "NO";
    }
}