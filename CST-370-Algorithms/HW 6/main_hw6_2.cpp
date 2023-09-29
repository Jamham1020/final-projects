/*
 * INSTRUCTION:
 *     This is a C++ starting code for hw6_2.
 *     When you finish the development, download this file.
 *     Note that the current filename is "main.cpp".
 *     But rename it to "main_hw6_2.cpp".
 *     After that, upload the renamed file on Canvas.
 */

// Finish the head comment with Abstract, Name, and Date.
/*
 * Title: main_hw6_2.cpp
 * Abstract: Program implements the Floyd algorithm to display all-pairs shortest paths
 * Name: Janet Pham
 * Date: 02/16/2023
 */

#include <vector>
#include <iostream>
using namespace std;

//defining constant values
#define INFINITY -1
#define MAX 0x7FFFFFFF

//FUNCTION PROTOTYPES
vector<vector<int>> inputMatrix(); 
void print(vector<vector<int>> A);
int min(int a, int b);
void floyd(vector<vector<int>> &A);

vector<vector<int>> inputMatrix(){
  int nodes;
  cin >> nodes;

  //increase nodes by 1 to make it 1-indexed
  nodes++;
  //create a 2D vector of size(nodes x nodes)
  vector<vector<int>> A;
  A.resize(nodes, vector<int>(nodes));

  //take input from user
  for(int x = 1; x < nodes; x++){
    for(int y = 1; y < nodes; y++){
      cin >> A[x][y];
    }
  }
  return A;
}

//function to print the 2D vector
void print(vector<vector<int>> A){
  vector<vector<int>> R = A;
  int x, y;
  for(x = 1; x < R.size(); x++){
    for(y = 1; y < R.size(); y++){
      cout << A[x][y] << " ";
    }
    cout << endl;
  }
  cout << endl;
}

//function to find the minimum of two integers
int min(int a, int b){
  //convert INFINITY to MAX for comparison
  if(a == INFINITY){
    a = MAX;
  }
  //return the min value
  if(a > b){
    return b;
  }
  return a;
}

//function to apply Floyd Marshall algorithm
void floyd(vector<vector<int>> &A){
  vector<vector<int>> R = A;
  int node, row, col;
  //loop through all the nodes
  for(node = 1; node < R.size(); node++){
    //loop through all the rows
    for(row = 1; row < R.size(); row++){
      //loop through all the columns
      for(col = 1; col < R.size(); col++){
        //if there is a path from row to node and from node to col
        if( R[row][node] != INFINITY && R[node][col] != INFINITY){
          //update the shortest path between rol and col
          R[row][col] = min(R[row][col], R[row][node] + R[node][col]);
        }
      }
    }
  }
  //update the input matrix
  A = R;
}

int main()
{
  vector<vector<int>> A = inputMatrix(); //get the input matrix
  //apply FLOYD WARSHALL algorithm to get shortest path
  floyd(A); 
  print(A);
  return 0;
}



