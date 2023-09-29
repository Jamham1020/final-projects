/*
 * INSTRUCTION:
 *     This is a C++ starting code for hw3_3.
 *     When you finish the development, download this file.
 *     Note that the current filename is "main.cpp".
 *     But rename it to "main_hw3_3.cpp".
 *     After that, upload the renamed file on Canvas.
 */

// Finish the head comment with Abstract, Name, and Date.
/*
 * Title: main_hw3_3.cpp
 * Abstract: Program that implements the Depth-First Search (DFS) algorithm using a stack and a    *           mark array 
 * Name: Janet Pham
 * Date: 01/19/2023
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// FUNCTION PROTOTYPES //

//reading input from user
vector<vector<int>> userInput();
//starting the traversal of the graph
void startTraversal(vector<vector<int>> g, vector<int> &m);
//function to perform a depth first search (dfs) on the graph
void dfs(vector<vector<int>> g, vector<int> &m, int curr, int &counter);
//function for printing the final marks on each vertex
void printMark(vector<int> m);


//function for reading input from user and creating the graph
vector<vector<int>> userInput(){
  vector<vector<int>> g;
  int vertices, edges;

  cin >> vertices;
  //resize the graph vector
  g.resize(vertices);

  //sort the edges in each vertex
  cin >> edges;
  int source, destination;
  for(int x = 0; x < edges; x++){
    cin >> source >> destination;
    //add edges to the graph
    g[source].push_back(destination);
  }
  //sort edges in each vertex
  for(int x = 0; x < vertices; x++){
    sort(g[x].begin(), g[x].end());
  }
  return g;
}

//function for starting the traversal of the graph
void startTraversal(vector<vector<int>> g, vector<int> &m){
  int start = 0, counter = 0;
  
  //resize the mark vector and initialize each element as 0
  m.resize(g.size(), 0);
  
  dfs(g, m,start, counter);
}

//function for performing a depth first search on the graph
void dfs(vector<vector<int>> g, vector<int> &m, int curr, int &counter){
  m[curr] = ++counter; 

  for(int x = 0; x < g[curr].size(); x++){
    int neighbor = g[curr][x];
    if(m[neighbor] == 0){
      dfs(g, m, neighbor, counter);
    }
  }
}

//function for printing the mark vector
void printMark(vector<int> m){
  for(int x = 0; x < m.size(); x++){
    cout << "Mark[" << x << "]:" << m[x] << endl;
  }
}
//intake

int main()
{
  vector<vector<int>> graph;
  vector<int> mark;
  int start = 0;

  graph = userInput();

  startTraversal(graph, mark);
  printMark(mark);

  return 0;
}



