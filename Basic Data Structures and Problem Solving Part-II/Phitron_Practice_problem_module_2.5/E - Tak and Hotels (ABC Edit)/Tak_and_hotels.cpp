#include <iostream>  // This is a preprocessor directive that includes the iostream library, which allows us to use input and output operations in C++.
using namespace std; // This line declares that we will be using the standard namespace, which includes standard C++ libraries.

int main() { // This is the main function that will be executed when the program is run.
    // These lines declare four integer variables named N, K, X, and Y.
    int N, K, X, Y; 
    // This line uses the cin function to read in four integer values from standard input and store them in the variables N, K, X, and Y.
    cin >> N >> K >> X >> Y; 
    // This line calculates the total accommodation fee using the formula discussed earlier and stores it in the variable total_fee.
    int total_fee = min(N, K) * X + max(0, N-K) * Y; 
    cout << total_fee << endl; // This line uses the cout function to output the total fee to standard output, followed by a newline character.
    return 0; // This line indicates that the program has finished running and returns a value of 0 to the operating system.
}
