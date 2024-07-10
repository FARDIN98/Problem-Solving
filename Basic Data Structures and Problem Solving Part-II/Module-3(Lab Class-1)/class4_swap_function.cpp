// This line includes all standard libraries in the program.
#include<bits/stdc++.h>

// This line brings all the standard library functions and objects into the global namespace.
using namespace std;

// This line declares the main function, which is the entry point of the program. 
int main(){

    // This line declares an integer array 'a' with the values {2, 4, 1, 5, 6} and an integer 'n' with the value '5'.
    int a[]={2,4,1,5,6}, n=5;

    // This loop implements a simple sorting algorithm called Bubble Sort.
    for (int i = 0; i < n-1; i++)
    {
        // Inner loop iterates over the array from the element after the current outer loop index to the last element.
        for (int j = i+1; j < n; j++)
        {           
            // If the current element 'a[i]' is greater than the next element 'a[j]', their positions in the array are swapped.
            if(a[i]>a[j]){
                /*
                int tmp = a[i];
                a[i]=a[j];     //To make it easy we use swap() function
                a[j]=tmp; */ 

                swap(a[i],a[j]);
            }
        }
    }

    // This loop prints the sorted array to the console.
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

    // This line ends the 'main()' function and returns 0, indicating that the program executed successfully.
    return 0;
}
