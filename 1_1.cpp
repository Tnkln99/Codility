

#include <iostream>
#include <string>
#include <bitset>
// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution1_1(int N) {
    int resMax = 0;
    std::string binary = std::bitset<32>(N).to_string();

    for (std::size_t i = 0; i < binary.size(); ++i) {
        if(binary[i] == '1'){
            int cpt = 0;
            int j = i+1;
            while(binary[j] != '1' && j <  binary.size()){
                j++;
                cpt++;
            }
            if(cpt > resMax && j != binary.size()){
                resMax = cpt;
            }
        }
    }

    return resMax;
}

