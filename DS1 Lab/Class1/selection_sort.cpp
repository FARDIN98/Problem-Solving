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
        // Declare an integer 'min_idx' and initialize it with 'i'.
        int min_idx = i; 
        // Iterate from 'i+1' to 'n-1'.
        for(int j = i + 1; j < n; j++){ 
            // Check if the element at 'j' index is less than the element at 'min_idx' index.
            if(arr[j] < arr[min_idx]) 
                // If true, update 'min_idx' to 'j'.
                min_idx = j; 
        }
        // Call the 'swap' function to swap the elements at 'i' and 'min_idx' indices.
        swap(&arr[i], &arr[min_idx]); 
    }

    // Iterate through the sorted array.
    for(int i =  0; i < n; i++){ 
        // Print each element separated by space.
        printf("%d ", arr[i]); 
    }
    // Return 0 to indicate successful execution.
    return 0; 
}
