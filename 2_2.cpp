#include <algorithm>
#include <vector>
#include <iostream>
#include <in6addr.h>
using namespace std;

int solution2_2(vector<int> &A) {
    sort(A.begin(),A.end());
    if(A.size()==1){
        return A[0];
    }

    cout<<endl;

    for(int i = 0;i < A.size()-2; i++ ){
        int j = i;
        int cpt = 0;
        while(A[j]==A[j+1] && j < A.size()-2){
            j++;
            cpt ++;
            if(cpt >= 1){break;}
        }
        //cout<<"i: "<<i<<" j: "<<j<<" cpt: "<<cpt<<endl;
        if(cpt >= 1){
            //cout<<"i: "<<i<<" j: "<<j<<" cpt: "<<cpt;
            i = j;
        }
        else{
            return A[i];
        }

        if (j == A.size()-2){
            //cout<<"A[j]: "<<A[j];
            return A[j+1];
        }

    }
}