#include <vector>
#include <iostream>
using namespace std;

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution2_1(vector<int> &A, int K) {
    if(A.size()==0){
        return A;
    }


    for(int j = 0; j < K; j++){
        int lastElem = A[A.size()-1];
        for(int i = A.size()-1; i >= 0; i--){
            A[i] = A[i-1];
        }
        A[0] = lastElem;
    }

    return A;
}
