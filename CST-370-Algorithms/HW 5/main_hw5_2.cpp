/*
 * INSTRUCTION:
 *     This is a C++ starting code for hw5_2.
 *     When you finish the development, download this file.
 *     Note that the current filename is "main.cpp".
 *     But rename it to "main_hw5_2.cpp".
 *     After that, upload the renamed file on Canvas.
 */

// Finish the head comment with Abstract, Name, and Date.
/*
 * Title: main_hw5_1.cpp
 * Abstract: Program that displays the performance of two different sorting algorithms (merge sort and quick sort).
 * Name: Janet Pham
 * Date: 02/09/2023
 */

#include <chrono>
//library for stream manipulations
#include <iomanip>
#include <iostream>

// Global constant for print formatting
#define text_width 12  // print formatting

using namespace std;

//FUNCTION PROTOTYPES for userInput, print, heapSort, heapify, mergeSort, merge, quickSort, partition, and swap
int userInput();
void print(int a[], int len, int startFrom);
void heapify(int arr[], int n, int i);
void mergeSort(int arr[], int l, int r);
void merge(int arr[], int l, int m, int r);
void quickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);
void swap(int *a, int *b);

int main() {
  // Get the length of the array from user input
  int len;
  cout << "Enter input size: " ;
  
  cin >> len;
  int *array = new int[len];// Allocate memory for the array dynamically
  cout << "\n";
  
   // Initialize the random number generator with the current time
  srand(time(0));  
  // Fill the array with random numbers between 0 and len
  for (int x = 0; x < len; x++) {
  	array[x] = rand() % len; 
  }
  // Allocate memory for the merge sort and quick sort arrays
  int *mergeSortArr = new int[len];
  int *quickSortArr = new int[len];

  // Copy the values from the original array to the merge sort and quick sort arrays
  for (int x = 0; x < len; x++) {
  	mergeSortArr[x] = array[x];
  	quickSortArr[x] = array[x];
  }
  
  cout << "===================== Execution Time ====================" << endl;
  
  auto start = chrono::steady_clock::now();
  auto end = chrono::steady_clock::now();
  chrono::duration<double, milli> elapsed_time = end - start;

  // Time the merge sort algorithm
  start = chrono::steady_clock::now();
  mergeSort(mergeSortArr, 0, len - 1);
  end = chrono::steady_clock::now();
  elapsed_time = end - start;
  cout << left << setw(text_width) << "Merge Sort: "
  	 << elapsed_time.count()
  	 << right << " milliseconds" << endl;
  
  // Time the quick sort algorithm
  start = chrono::steady_clock::now();
  quickSort(quickSortArr, 0, len - 1);
  end = chrono::steady_clock::now();
  elapsed_time = end - start;
  cout << left << setw(text_width) << "Quick Sort: "
  	 << elapsed_time.count()
  	 << right << " milliseconds" << endl;
  
  cout << "=========================================================" << endl;
  
  return 0;
}

// Function to print the array, used for diagnostic purposes
void print(int a[], int len, int startFrom) {
  for (int x = startFrom; x < len; x++) {
  	cout << a[x] << " ";
  }
  cout << endl;
}


//Function to maintain the max heap property of the array
void heapify(int arr[], int n, int i) {
  int largest = i;    
  int l = 2 * i + 1; //calculate the index of the left child
  int r = 2 * i + 2; //calculate the index of the right child
  //loop through the array from the laste element till the second element
  if (l < n && arr[l] > arr[largest])
  	largest = l;
  
  if (r < n && arr[r] > arr[largest])
  	largest = r;
  
  if (largest != i) {
  	swap(arr[i], arr[largest]);
  
  	
  	heapify(arr, n, largest);
  }
}

//Merge Sort -> geeksforgeeks.com
void merge(int arr[], int l, int m, int r) {
  int n1 = m - l + 1;
  int n2 = r - m;
  
  
  int *L = new int[n1];
  int *R = new int[n2];
  
  
  for (int i = 0; i < n1; i++)
  	L[i] = arr[l + i];
  for (int j = 0; j < n2; j++)
  	R[j] = arr[m + 1 + j];
  int i = 0;
  
  int j = 0;
  
  int k = l;
  
  while (i < n1 && j < n2) {
  	if (L[i] <= R[j]) {
  		arr[k] = L[i];
  		i++;
  	} else {
  		arr[k] = R[j];
  		j++;
  	}
  	k++;
  }
  
  while (i < n1) {
  	arr[k] = L[i];
  	i++;
  	k++;
  }
  
  while (j < n2) {
  	arr[k] = R[j];
  	j++;
  	k++;
  }
  delete[] L;
  delete[] R;
}


void mergeSort(int arr[], int l, int r) {
  if (l >= r) {
  	return;  
  }
  int m = (l + r - 1) / 2;
  mergeSort(arr, l, m);
  mergeSort(arr, m + 1, r);
  merge(arr, l, m, r);
}

//quicksort -> geeksforgeeks.com
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}


int partition(int arr[], int low, int high) {
  int pivot = arr[high];  
  int i = (low - 1);      
  
  for (int j = low; j <= high - 1; j++) {
     
  	if (arr[j] < pivot) {
  		i++;  
  		swap(&arr[i], &arr[j]);
  	}
  }
  swap(&arr[i + 1], &arr[high]);
  return (i + 1);
}

void quickSort(int arr[], int low, int high) {
  if (low < high) {
  	int pi = partition(arr, low, high);
  
  	
  	quickSort(arr, low, pi - 1);
  	quickSort(arr, pi + 1, high);
  }
}
