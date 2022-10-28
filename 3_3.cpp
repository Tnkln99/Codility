//
// Created by tanku on 26.10.2022.
//
// you can use includes, for example:
// #include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int solution3_3(vector<int> &A) {
    int dif = 100000;
    int somTotal = 0;
    int somPointCutR = 0;
    int somPointCutL = 0;
    for(int i = 0; i < A.size(); i++){
        somTotal += A[i];
    }
    int res;
    for(int pointCut = 0; pointCut < A.size()-1; pointCut++){
        somPointCutR += A[pointCut];
        somPointCutL = somTotal - somPointCutR;
        if (dif > abs(somPointCutL - somPointCutR)){
            cout<<"pointCut: "<<pointCut<<" dif: "<<dif<<" somTotal: "<<somTotal<<" somPointCutL: "<<somPointCutL<<" somPointCutR "<<somPointCutR<<endl;
            dif = abs(somPointCutL - somPointCutR);
        }
    }
    return dif;
}
