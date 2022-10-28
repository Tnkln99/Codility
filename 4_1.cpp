// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <algorithm>
using namespace std;
#include <iostream>
#include <vector>

void printVec(vector<int> &A){
    for(int i = 0; i < A.size(); i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}


int solution4_1(int X, vector<int> &A) {
    vector<int> numMinorX;

    for(int i = 0; i < A.size(); i++){
        printVec(numMinorX);
        if(A[i]<=X && find(numMinorX.begin(), numMinorX.end(), A[i]) == numMinorX.end()){
            numMinorX.push_back(A[i]);
        }

        if(numMinorX.size() == X){
            return i;
        }
    }

    return -1;
}

