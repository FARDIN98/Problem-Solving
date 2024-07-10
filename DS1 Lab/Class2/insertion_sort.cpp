// Include input-output stream header file.
#include <iostream> 

// Use standard namespace for cout and cin.
using namespace std; 

// Define a function to perform insertion sort.
void insertionSort(int arr[], int n) { 

    // Iterate through the array starting from the second element.
    for (int i = 1; i < n; i++) { 

        // Store the current element in 'key'.
        int key = arr[i]; 

        // Initialize 'j' to the index before the current element.
        int j = i - 1; 

        // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position.
        while (j >= 0 && arr[j] > key) { 

            // Move the element at 'j' one position ahead.
            arr[j + 1] = arr[j]; 

            // Move 'j' to the previous index.
            j = j - 1; 
        }
        // Place 'key' at its correct position in the sorted array.
        arr[j + 1] = key; 
    }
}

// Define the main function.
int main() { 

    // Declare an integer 'n' to store the size of the array.
    int n; 

    // Prompt the user to enter the number of elements.
    cout << "Enter the number of elements: "; 

    // Read the number of elements from the user.
    cin >> n; 

    // Declare an integer array of size 'n'.
    int arr[n]; 

    // Prompt the user to enter the elements of the array.
    cout << "Enter " << n << " elements: "; 

    // Read the elements of the array from the user.
    for (int i = 0; i < n; i++) { 

        // Read each element from the user.
        cin >> arr[i]; 
    }

    // Call the insertionSort function to sort the array.
    insertionSort(arr, n); 

    // Print a message indicating the sorted array.
    cout << "Sorted array: "; 

    // Print the elements of the sorted array.
    for (int i = 0; i < n; i++) { 

        // Print each element separated by space.
        cout << arr[i] << " "; 
    }

    // Move to the next line.
    cout << endl; 

    // Return 0 to indicate successful execution.
    return 0; 
}
