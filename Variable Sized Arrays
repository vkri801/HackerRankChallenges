#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//variables declared
int rows, queries, columns, i, j;


int main() {
    //fill in values for the number of rows and the queries 
    cin>> rows >> queries;
    
    //create array of n rows of  vector<int>
    vector<int> Vec[rows];
    
    //for loop to fill in array with vectors
    for(int i=0; i<rows; i++){
        int value;
        //read vector size
        cin>> columns;

        //declare vector
        
        //fill in each vector with the appropriate values
        for(int k=0; k<columns;k++){
            cin>>value;
            Vec[i].push_back(value);
        }
    }
    
    //query the stored array of vectors at ith row and jth location for all queries
    for(int q=0; q<queries;q++){
        cin>>i >> j;
        cout<< Vec[i][j] << "\n";
    }

     
    return 0;
}
