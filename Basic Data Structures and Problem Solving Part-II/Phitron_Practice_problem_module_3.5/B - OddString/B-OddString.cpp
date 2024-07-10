// This line includes a library that provides access to standard input/output functions.
#include<bits/stdc++.h>

// This line declares that the code is using the standard namespace.
using namespace std;

// This line defines the main function that will be executed when the program is run.
int main(){

    // This line declares a string variable named 's'.
    string s;

    // This line reads a string input from the user and stores it in the variable 's'.
    cin >> s;

    // This line calculates the length of the string 's' and stores it in an integer variable named 'len'.
    int len = s.length();

    // This line starts a loop that iterates over each character of the string 's'.
    for (int i = 0; i < len ; i++)
    {
        // This line checks if the index 'i' is even or not.
        if(i%2!=1){

            // This line prints the character at index 'i' of the string 's'.
            cout << s[i];
        }
    }

    // This line indicates that the main function has completed execution and the program is exiting.
    return 0;
}
