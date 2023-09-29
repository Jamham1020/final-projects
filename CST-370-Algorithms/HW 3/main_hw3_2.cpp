/*
 * INSTRUCTION:
 *     This is a C++ starting code for hw3_2.
 *     When you finish the development, download this file.
 *     Note that the current filename is "main.cpp".
 *     But rename it to "main_hw3_2.cpp".
 *     After that, upload the renamed file on Canvas.
 */

// Finish the head comment with Abstract, Name, and Date.
/*
 * Title: main_hw3_2.cpp
 * Abstract: Program that reads an input graph data from user, then present a path for the        *           traveling salesman problem (TSP). Assume that the maximum number of vertices in the  *           input graph is less than or equal to 15
 * Name: Janet Pham
 * Date: 01/18/2023
 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// struct edges used to store the destination vertex and the cost of the edge
struct edges {
  int destination, cost;
};

// struct results used to store the final path and cost of the path
struct results{
  vector<int> p;
  int cost;
};

//FUNCTION PROTOTYPEs

//function used to to read the input from the user, including the number of vertices, edges, and starting vertex
void readInput(vector<vector<edges>> &graph, int &startVertex, vector<int> &p);

//function used to get the cost of a given path
int getCost(vector<vector<edges>> g, int startVertex, vector<int> &p);

//function is used to find the most optimal path
results findPath(vector<vector<edges>> g, int startVertex, vector<int> &p);
void getResults(results r);



//read input from user, including the number of vertices, edges, and starting vertex
void readInput(vector<vector<edges>> &graph, int &startVertex, vector<int> &p){
  int vertices, edge;
  cin >> vertices;

  //resize the graph and path vectors to the number of vertices
  graph.resize(vertices);
  p.resize(vertices);

  //initialize the path vector with values from 0 to n-1
  for(int x = 0; x < p.size(); x++){
    p[x] = x;
  }

  //read the input for edges, sources, destination, and cost
  int source, destination, cost;
  edges e;
  cin >> edge;
  for(int x = 0; x < edge; x++){
    cin >> source >> destination >> cost;
    e.destination = destination;
    e.cost = cost;
    graph[source].push_back(e);
  }
  cin >> startVertex;
}

//getCost function is used to get the cost of the given path
int getCost(vector<vector<edges>> g, int startVertex, vector<int> &p){
  int cost = 0, counter = 0;

  if(p[0] == startVertex){
    p.push_back(startVertex);

    int current;
    int next;
    for(int x = 0; x < p.size() - 1; x++){
      current = p[x];
      next = p[x + 1];
      
      // looks for the next vertex 
      for(int y = 0; y < g[current].size(); y++){
        if(g[current][y].destination == next){
          cost += g[current][y].cost;
          counter++;
        }
      }
    }
    // removes the last vertex
    p.pop_back(); 
  }
  if(counter < p.size()){
    return -1;
  }
  return cost;
}

//find the most optimal path
results findPath(vector<vector<edges>> g, int startVertex, vector<int> &p){
  int cost = 0, minCost = numeric_limits<int>::max();
  results r;
  do {
    cost = getCost(g, startVertex, p);
    //stores the optimal path
    if(cost < minCost && cost > 0){
      minCost = cost;
      r.p = p;
      r.p.push_back(startVertex);
      r.cost = cost;
    }
  } while(next_permutation(p.begin(), p.end()));
    if(minCost == numeric_limits<int>::max()){
      r.cost = -1;
    }
    return r;
}

//print the final path and cost of the path
void printResults(results r){
  cout << "Path:";
  if(r.p.size() > 0){
    cout << r.p[0];
    for(int x = 1; x < r.p.size(); x++){
      cout << "->" <<r.p[x];
    }
  }
  cout << endl;
  cout << "Cost:" << r.cost << endl;
}

//entry point of the program, which calls the readInput(), findPath(), and printResults() functions in order to get the final result
int main() {
  vector<vector<edges>> graph; //stores the user input as a graph
  vector<int> p; // use to find optimal path
  results r;
  int startVertex;

  readInput(graph, startVertex, p);
  r = findPath(graph, startVertex, p);
  printResults(r);

  return 0;
}

