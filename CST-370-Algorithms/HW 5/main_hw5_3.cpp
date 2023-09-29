/*
 * INSTRUCTION:
 *     This is a C++ starting code for hw5_3.
 *     When you finish the development, download this file.
 *     Note that the current filename is "main.cpp".
 *     But rename it to "main_hw5_3.cpp".
 *     After that, upload the renamed file on Canvas.
 */

// Finish the head comment with Abstract,Name, and Date.
/*
 * Title: main_hw5_3.cpp
 * Abstract: Program simulate the operations of linear probing
 * Name: Janet Pham
 * Date: 02/10/2023
 */

#include <iostream>
#include <vector>
using namespace std;

#define LOAD 0.5    // predefined load for hash table
#define EMPTY '/0'  // defined value for empty vector element

int hasher(int value, int hash);
vector<int> buildHashTable(int &hash);
int getNextPrime(int input);
void getCommands(vector<int> &hashTable, int &hash);
bool ratioIsOK(vector<int> &hashTable);
int getNextPrime(int input);
void rehash(vector<int> &hashTable, int &hash);
void insert(vector<int> &hashTable, int value, int &hash);
void displayStatus(vector<int> &hashtable, int index);
void tableSize(vector<int> &hashTable);
void search(vector<int> hashTable, int value, int hash);

void getCommands(vector<int> &hashTable, int &hash) {
  string command;
  cin >> command;
  if (command == "insert") {
  	int value;
  	cin >> value;
  	insert(hashTable, value, hash);
  } else if (command == "displayStatus") {
  	int index;
  	cin >> index;
  	displayStatus(hashTable, index);
  } else if (command == "search") {
  	int value;
  	cin >> value;
  	search(hashTable, value, hash);
  } else if (command == "tableSize") {
  	tableSize(hashTable);
  }
}

void print(vector<int> v) {
  for (auto x : v) {
  	cout << x << " ";
  }
  cout << endl;
  }
  
  int main() {
  int hash = 0;
  vector<int> hashTable = buildHashTable(hash);
  
  int commands;
  cin >> commands;
  for (int x = 0; x < commands; x++)
  	getCommands(hashTable, hash);
  
  return 0;
  }
  
  int hasher(int value, int hash) {
  return value % hash;
}

//function to build the hash table of the given size
vector<int> buildHashTable(int &hash) {
  int hashTableSize;
  cin >> hashTableSize;
  vector<int> hashTable(hashTableSize, EMPTY); //initialize the hash table
  hash = hashTableSize;  // store the size of the hash table in the has variable hash
  
  return hashTable;
}

//function to check if ratio of occupied to total size is greater than the predefined value LOAD
bool ratioIsOK(vector<int> &hashTable) {
  int counter = 1; //counter to keep track of the number of preoccupied spaces in the hash table
  for (auto x : hashTable) {
  	if (x != EMPTY) {
  		counter++;
  	}
  }
  double ratio = (double)counter / (double)hashTable.size();
  if (ratio > LOAD) {
  	return false;
  }
  return true;
}

int getNextPrime(int input) {
  int primes = input + 11; 
  vector<bool> prime(primes, true);
  int p = 2;
  while (p * p <= primes) {
  	if (prime[p] == true) {
  		for (int x = p * p; x < primes; x += p) {
  			prime[x] = false;
  		}
  	}
  	p++;
  }
  for (int x = input + 1; x < primes; x++) {
  	if (prime[x]) {
  		return x;
  	}
  }
  
  return 0;
}

void rehash(vector<int> &hashTable, int &hash) {
  hash = getNextPrime(hashTable.size() * 2);
  vector<int> newHashTable(hash, EMPTY); 
  
  int key;
  for (auto value : hashTable) {
  	if (value != EMPTY) {
  		key = hasher(value, hash);
  		newHashTable[key] = value;
  	}
  }
  hashTable = newHashTable;
}

void insert(vector<int> &hashTable, int value, int &hash) {
  int key = hasher(value, hash);
  if (ratioIsOK(hashTable)) {
  
  	while (hashTable[key] != EMPTY) {
  		key++;
     
  		if (key == hashTable.size()) {
  			key = 0;
  		}
  	}
  	hashTable[key] = value;
  } else {
  	rehash(hashTable, hash);
  	insert(hashTable, value, hash);  
  }
}

void displayStatus(vector<int> &hashtable, int index) {
  if (hashtable[index] != EMPTY) {
  	cout << hashtable[index] << endl;
  } else {
  	cout << "Empty" << endl;
  }
}

void tableSize(vector<int> &hashTable) {
  cout << hashTable.size() << endl;
}

void search(vector<int> hashTable, int value, int hash) {
  int hashIndex = hasher(value, hash);
  int notFound = 0;
  bool isFound = true; 
  
  
  while (hashTable[hashIndex] != value) {
  	hashIndex++;
  	notFound++;
  	if (hashIndex == hashTable.size() - 1) {
  		hashIndex = 0;
  	}
  	if (notFound == hashTable.size()) {
  		isFound = false;  
  		break;
  	}
}

if (isFound) {
  	cout << value << " Found" << endl;
  } else {
  	cout << value << " Not found" << endl;
  }
}

