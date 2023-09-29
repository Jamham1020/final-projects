/*
 * INSTRUCTION:
 *     This is a C++ starting code for hw6_1.
 *     When you finish the development, download this file.
 *     Note that the current filename is "main.cpp".
 *     But rename it to "main_hw6_1.cpp".
 *     After that, upload the renamed file on Canvas.
 */

// Finish the head comment with Abstract, Name, and Date.
/*
 * Title: main_hw6_1.cpp
 * Abstract: Program that collect maximum number fo coins on an n x m board.
 * Name: Janet Pham
 * Date: 02/16/2023
 */

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//declare a vector of pairs to store the optimal path and an integer to store the maximum number of coins
vector<pair<int,int>>optimalPath;
int maxCoin;

//define recursive function to find the optimal path and the max number of coins
void dfs(int i,int j, int m, int n, vector<vector<int>> &arr, int coins, vector<pair<int,int>> curr){
	//if the last row/column are reached, return
  if(i >= m || j >= n){
		return;
	}
  //add the current position to the path vector
	curr.push_back({i+1, j+1});

	//if we have reached the bottom-right corner, check if the current path has more coins than the previous optimal path
	if(i == m-1 && j == n-1){
		if(coins+arr[i][j] > maxCoin){
			maxCoin = coins+arr[i][j];
			optimalPath = curr;
		}
		return;
	}
	//recursively explore the path by moving down and right
	dfs(i+1, j, m, n, arr, coins+arr[i][j], curr);
	dfs(i, j+1, m, n, arr, coins+arr[i][j], curr);
}


int main()
{
  // read the dimensions of the array from the user
	int m, n; cin >> m >> n;
  //declare a 2D vector to share the array values
	vector<vector<int>> arr(m, vector<int>(n));
  //read the array values from the user
	for(int i = 0; i < m; i++){
		for(int j = 0;j < n; j++){
			cin >> arr[i][j];
		}
	}

	//initialize the maximum number of coins to -1 and create a vector to store the current path
	maxCoin = -1;
	vector<pair<int,int>>currPath;
	int coinPath = 0;
  //Call the dfs function to find the optimal path and the max number of coins
	dfs(0, 0, m, n, arr, coinPath, currPath);

  //print max number of coins and optimal path
	cout<<"Max coins:"<<maxCoin<<endl;
	cout<<"Path:";
	for(pair<int,int> p : optimalPath){
		cout<<"("<<p.first<<","<<p.second<<")";
		if(p.first == m && p.second == n)
			cout<<endl;
		else
			cout<<"->";
	}
	return 0;
}

