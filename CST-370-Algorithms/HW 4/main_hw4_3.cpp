/*
 * INSTRUCTION:
 *     This is a C++ starting code for hw4_3.
 *     When you finish the development, download this file.
 *     Note that the current filename is "main.cpp".
 *     But rename it to "main_hw4_3.cpp".
 *     After that, upload the renamed file on Canvas.
 */

// Finish the head comment with Abstract, Name, and Date.
/*
 * Title: main_hw4_3.cpp
 * Abstract: Program that conducts the topological sorting based on the Kahn algorithm.
 * Name: Janet Pham
 * Date: 02/01/2023
 */


#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

// FUNCTION PROTOTYPES
vector<vector<int>> input();
vector<int> inDegree(vector<vector<int>> g); 
queue<int> loadQueue(vector<int> v); //function to load vertices with in-degree of each vertices
void Kahn(vector<vector<int>> g); //function to implement Kahn's algorithm
void displayResults(vector<int> initDegree, vector<int> order); //function display in-degree of each vertices


vector<vector<int>> input() {
  int vertices, edges;
  cin >> vertices;
  vector<vector<int>> graph;
  graph.resize(vertices); //resize the graph to store the number of vertices

  cin >> edges;
  int source, destination;
  for (int x = 0; x < edges; x++) {
    cin >> source >> destination;
    graph[source].push_back(destination); //add edge to graph
  }

  //sort the edges of each vertex in ascending order
  for (int x = 0; x < graph.size(); x++) {
    sort(graph[x].begin(), graph[x].end());
  }
  return graph;
}

//function 'Kahn' use to implement Kahn's algorithm
void Kahn(vector<vector<int>> g) {
  vector<int> degree; //variable to store in-degree of each vertex
  vector<int> initDegree;  //variable to store initial in-degree of each vertex
  queue<int> q; //queue to store vertices with in-degree 0
  vector<int> order; //variable to store order

  //calculate in-degree of each vertex
  initDegree = inDegree(g);
  degree = initDegree;

  //load vertices with in-degree 0 in a queue
  q = loadQueue(degree);

  while (!q.empty()) {
        
    int removed = q.front();
    order.push_back(removed);  
    q.pop();

        
    for (int x = 0; x < g[removed].size(); x++) {
      degree[g[removed][x]] -= 1;
      if (degree[g[removed][x]] == 0) {
      q.push(g[removed][x]);  
            }
        }
    }
    displayResults(initDegree, order);
}

//function for calculating in-degree of each vertices
vector<int> inDegree(vector<vector<int>> g) {
    vector<int> degree(g.size(), 0);

    for (int x = 0; x < g.size(); x++) {
        for (int y = 0; y < g[x].size(); y++) {
            degree[g[x][y]] += 1;
        }
    }

    return degree;
}

//function to load vertices with in-degree 
queue<int> loadQueue(vector<int> v) {
    queue<int> q;
    for (int x = 0; x < v.size(); x++) {
        if (v[x] == 0) {
            q.push(x);
        }
    }
    return q;
}


void displayResults(vector<int> initDegree, vector<int> order) {
    
    for (int x = 0; x < initDegree.size(); x++) {
        cout << "In-degree[" << x << "]:" << initDegree[x] << endl;
    }
    if (order.size() == initDegree.size()) {
        cout << "Order:" << order[0];
        for (int x = 1; x < order.size(); x++) {
            cout << "->" << order[x];
        }
        cout << endl;
    } else {
        cout << "No Order:" << endl;
    }
}

int main() {
  vector<vector<int>> graph;
  graph = input();  
  Kahn(graph); //implement Kahn's algorithm on the graph
  return 0;
}