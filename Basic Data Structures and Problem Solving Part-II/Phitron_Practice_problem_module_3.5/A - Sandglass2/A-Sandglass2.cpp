#include<bits/stdc++.h>
using namespace std;

int main(){
    int X,t,sub;

    cin >> X >> t;

    sub = X - t;

    if(X > t){
        cout << sub << endl;
    }else{
        cout << 0 << endl;
    }

    return 0;
}