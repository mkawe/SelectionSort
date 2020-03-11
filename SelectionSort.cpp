
#include <bits/stdc++.h> 
using namespace std; 
  
void swap(int *zp, int *yp)  
{  
    int temp = *zp;  
    *zp = *yp;  
    *yp = temp;  
}  
  
void selectionSort(int arr[], int n)  
{  
    int i, j, min_idx;  
  
    
    for (i = 0; i < n-1; i++)  
    {  
          
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
  
        // if minimum is found swap with the first element   
        swap(&arr[min_idx], &arr[i]);  
    }  
}  
  
//Function to print the  array 
void printArray(int arr[], int size)  
{  
    int i;  
    for (i=0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
  
// program to tryout the  above function 
int main()  
{  
    int arr[] = {67, 78,4, 90,1,-1};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    selectionSort(arr, n);  
    cout << "Sorted array: \n";  
    printArray(arr, n);  
    return 0;  
}  
  


