#include <bits/stdc++.h>
using namespace std;
bool isSafe(int newX, int newY, vector<vector<bool>>&visited,int srcx, int srcy,int maze[][4], int row, int col ){
    if((newX >= 0 && newX <row )&& (newY >= 0 && newY <col) && maze[newX][newY] == 1 && visited[newX][newY] == false ){
        return true;
    } 
    else return false;

}
void printAllPath(int maze[][4], int row, int col, int srcx, int srcy, string &output, vector<vector<bool>> &visited){
    // base case;
    if(srcx == row -1 && srcy == col - 1){
        cout << output << endl;
        return;
    }
    // i want to up side;
    int newX = srcx - 1;
    int newY = srcy;
    if(isSafe(newX, newY,  visited,srcx, srcy, maze,row,col)){
        visited[newX][newY] = true;
        output.push_back('U');
        printAllPath(maze, row, col, newX, newY, output, visited);
        // backtracking
        output.pop_back();
        visited[newX][newY] = false;
    }
    // i want to go down side
     newX = srcx + 1;
     newY = srcy;
    if(isSafe(newX, newY,  visited,srcx, srcy, maze,row,col)){
        visited[newX][newY] = true;
        output.push_back('D');
        printAllPath(maze, row, col, newX, newY, output, visited);
        // backtracking
        output.pop_back();
        visited[newX][newY] = false;
    }
    // right side
     newX = srcx ;
     newY = srcy+1;
    if(isSafe(newX, newY,  visited,srcx, srcy, maze,row,col)){
        visited[newX][newY] = true;
        output.push_back('R');
        printAllPath(maze, row, col, newX, newY, output, visited);
        // backtracking
        output.pop_back();
        visited[newX][newY] = false;
    }
    // left side
    newX = srcx ;
     newY = srcy-1;
    if(isSafe(newX, newY,  visited,srcx, srcy, maze,row,col)){
        visited[newX][newY] = true;
        output.push_back('L');
        printAllPath(maze, row, col, newX, newY, output, visited);
        // backtracking
        output.pop_back();
        visited[newX][newY] = false;
    }
}
int main(){
    int maze[4][4] = {
        {1,0,0,0},
        {1,1,0,0},
        {1,1,1,0},
        {1,1,1,1},
    };
    int row = 4;
    int col= 4;
    int srcx =0;
    int srcy = 0;
    string output = "";
    // create visted array 
    vector<vector<bool>>visited(row,vector<bool>(col,false));
    if(maze[0][0] == 0){
        cout << "No path exists" << endl;
    }
    else{
        visited[srcx][srcy] = true;
        printAllPath(maze,row,col,srcx,srcy,output,visited);
    }

}