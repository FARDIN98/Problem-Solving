// Include standard input-output header file.
#include <stdio.h> 

// Define a function 'swap' that takes two integer pointers as arguments.
void swap(int *a, int *b){ 
    // Declare and initialize a temporary variable with the value pointed by 'a'.
    int temp = *a; 
    // Assign the value pointed by 'b' to the location pointed by 'a'.
    *a = *b; 
    // Assign the value of 'temp' to the location pointed by 'b'.
    *b = temp; 
}

// Define the main function.
int main(){ 
    // Declare an integer 'n' and read its value from standard input.
    int n; scanf("%d", &n); 
    // Declare an integer array of size 'n'.
    int arr[n]; 

    // Iterate from 0 to 'n-1'.
    for(int i =  0; i < n; i++){ 
        // Read integers from standard input and store them in the array.
        scanf("%d", &arr[i]); 
    }

    // Iterate through the array.
    for(int i = 0; i < n; i++){ 
        // Declare a boolean variable 'check' and initialize it to false.
        bool check = false; 
        // Iterate from 0 to 'n-i-2'.
        for(int j = 0; j < n - i - 1; j++){ 
            // Check if the element at 'j' index is greater than the next element.
            if(arr[j] > arr[j + 1]){ 
                // If true, swap the elements at 'j' and 'j+1' indices.
                swap(&arr[j], &arr[j + 1]); 
                // Set 'check' to true indicating that a swap occurred.
                check = true; 
            }
        }
        // If 'check' is still false after the inner loop, break out of the outer loop.
        if(!check) break; 
    }
    
    // Iterate through the sorted array.
    for(int i =  0; i < n; i++){ 
        // Print each element separated by space.
        printf("%d ", arr[i]); 
    }

    // Return 0 to indicate successful execution.
    return 0; 
}
