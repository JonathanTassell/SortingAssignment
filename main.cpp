#include <vector> 
#include <iostream>

#include "BubbleSort.h"

int main(){
    std::vector<int> pp{2, 7, 122, 1}; 

    BubbleSort s1; 

    std::vector<int> pp_new = s1.sort(pp); 

    for(int i=0; i<4; i++){
        std::cout << pp_new[i] << std::endl; 
    }

    

}

