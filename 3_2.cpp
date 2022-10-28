#include <algorithm>
#include <in6addr.h>
#include <vector>
using namespace std;


int solution3_2(vector<int> &A) {
    std::sort(A.begin(),A.end());
    if(A.size()==0){
        return 1;
    }

    if(A[0]!=1){
        return 1;
    }

    for(int i = 0;i < A.size(); i++ ){
        //std::cout<<"i+1: "<<i+1<<"A[i]: "<<A[i]<<endl;
        if(A[i] != i+1){
            return i+1;
        }
    }
    return A[A.size()-1]+1;
}