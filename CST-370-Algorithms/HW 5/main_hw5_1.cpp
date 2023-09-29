/*
 * INSTRUCTION:
 *     This is a C++ starting code for hw5_1.
 *     When you finish the development, download this file.
 *     Note that the current filename is "main.cpp".
 *     But rename it to "main_hw5_1.cpp".
 *     After that, upload the renamed file on Canvas.
 */

// Finish the head comment with Abstract, Name, and Date.
/*
 * Title: main_hw5_1.cpp
 * Abstract: Program that conduct heap operations. Numbers in heap are unique (no duplicates). It should read the numbers and display if its a max heap   
 *           or not. If its not a max heap, program should construct a heap with the numbers.
 * Name: Janet Pham
 * Date: 02/08/2023
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* Commands Needed to be Included:
* - displayMax, insert, heapify, deleteMax, and display
*/

//FUNCTION PROTOTYPES
void inputHeap(vector<int> &heap);
void print(vector<int> v);
bool maxHeap(vector<int> heap);
void heapify(vector<int> &heap);
void inputCommand(vector<int> &heap);
void insert(vector<int> &heap, int node_val);
void deleteNode(vector<int> &heap, int node_val);
void update(vector<int> &heap, int node_index, int new_val);
void displayMax(vector<int> heap);
void deleteMax(vector<int> &heap);


//inputs the initial heap and stores the values in the vector "heap"
void inputHeap(vector<int> &heap) {
  int cycles;
  cin >> cycles;
  heap.resize(cycles + 1);
  int input;
  for (int x = 1; x < cycles + 1; x++) {
    cin >> input;
    heap[x] = input;
  }
}

//function takes in vector and outputs its content
void print(vector<int> v) {
  for (int x = 1; x < v.size(); x++) {
    cout << v[x] << " "; //output each element in the vector, separated by spaces
  }
  cout << endl;
}

//checks if the inputted heap is a max heap or not
bool maxHeap(vector<int> heap) {
  int parent;
  int l_child;
  int r_child;
  for (int x = heap.size() / 2; x > 0; x--) {
    parent = x;
    l_child = x * 2;      
    r_child = x * 2 + 1;  
    if (l_child < heap.size()) {
      if (heap[l_child] > heap[parent]) {
	     return false;  //if left child is greater than  parent node -> not a max heap
	    }
    }
    if (r_child < heap.size()) {
		
    if (heap[r_child] > heap[parent]) {
	   return false; //if right child is greater than the parent node -> not max heap
	   }
    }
  }
  return true; //if all nodes satisfy the max heap property, it's a max heap
}

//function converts the inputted heap into a max heap
void heapify(vector<int> &heap) {
  int parent;
  int currVal;
  bool is_heap;
  int l_child;
  int r_child;

while (!maxHeap(heap)) {
  for (parent = heap.size() / 2; parent > 0; parent--) {
    is_heap = false;
    l_child = 2 * parent;
    r_child = 2 * parent + 1;

    while (!is_heap && l_child < heap.size()) {
	   if (l_child < heap.size()) {
	     if (heap[l_child] < heap[r_child]) {
		      l_child = r_child; 
	     }
	     if (heap[parent] >= heap[l_child]) {
		    is_heap = true;
	     } else {
					
					 swap(heap[parent], heap[l_child]);
				  }
			 }
		  }
	 }
  }
}

//function inserts a new node into the heap and then calls the heapify function 
void insert(vector<int> &heap, int node_val) {
  heap.push_back(node_val);
  heapify(heap);
}

//function deletes a node from the heap and then calls the heapify function 
void deleteNode(vector<int> &heap, int node_val) {
for (int x = 1; x < heap.size(); x++) {
	if (heap[x] == node_val) {
		heap[x] = heap.back();
		heap.pop_back();
		heapify(heap);
		break;
	}
}
}

//function updates the value of a node in the heap and calls heapify function
void update(vector<int> &heap, int node_index, int new_val) {
  heap[node_index] = new_val;
  heapify(heap);
}

//function displays maximum value in the heap
void displayMax(vector<int> heap) {
  cout << heap[1] << endl;
}

//function deletes maximum value in heap and calls heapify function
void deleteMax(vector<int> &heap) {
  heap[1] = heap.back();
  heap.pop_back();
  heapify(heap);
}

//function takes input for the number of commands and performs operations: insert, delete, update, displayMax, deleteMax) accordingly
void inputCommand(vector<int> &heap) {
  int num_commands;
  cin >> num_commands;

  string command;
  int node_val;   
  int update_val;  

for (int x = 0; x < num_commands; x++) {
	cin >> command;

   
	if (command == "insert") {
		cin >> node_val;
		insert(heap, node_val);
	} else if (command == "delete") {
		cin >> node_val;
		deleteNode(heap, node_val);
	} else if (command == "update") {
		cin >> node_val >> update_val;
		update(heap, node_val, update_val);
	} else if (command == "display") {
		print(heap);
	} else if (command == "displayMax") {
		displayMax(heap);
	} else if (command == "deleteMax") {
		deleteMax(heap);
	 }
  }
}

//user input for initial heap, check maxHeap, and additional commands to modify the heap
int main() {
  vector<int> heap; //creates an empty integer vector named 'heap'
  inputHeap(heap);
  if (maxHeap(heap)) {
    cout << "This is a heap." << endl;
  } else {
    cout << "This is NOT a heap." << endl;
	
  heapify(heap);
  }

  inputCommand(heap);
  return 0;
}