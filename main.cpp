
#include "1_1.cpp"
#include "2_1.cpp"
#include "2_2.cpp"
#include "3_1.cpp"
#include "3_2.cpp"
#include "3_3.cpp"
#include "4_1.cpp"


void generateRandomArray(std::vector<int> & array, int size){
    for (int i = 0; i < size; i ++){
        int v1 = rand() % 100;
        array.emplace_back(v1);
    }
}

int main(){
    std::vector<int>  array1{1,2,3,4,5};
    std::vector<int>  array2{0,0,0};
    std::vector<int>  array3{2,2,2,3,3,4,4,4,7,7,7,9};
    std::vector<int>  array4{1,2,3,4,5};
    std::vector<int>  array5;


    //usage example:
    std::vector<int>  res = solution2_1(array1,3); // array1 has been changed. 

    for (int i = 0; i < res.size(); i ++){
        cout<<res[i]<<" ";
    }
}