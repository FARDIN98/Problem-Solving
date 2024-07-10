#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,p,x,y,z,total;

    cin >> n;

    p = 200;
    x = n * 800;
    z = n/15;
    y = z*p;

    total = x - y;

    cout << total;
}