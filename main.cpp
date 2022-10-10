#include <vector> 
#include <iostream>

#include "BubbleSort.h"

int main(){
    std::vector<int> pp{1, 3, 5, 4, -5, 100, 7777, 2014}; 

    BubbleSort s1; 

    std::vector<int> pp_new = s1.sort(pp); 

    std::cout << "true" << std::endl; 

    for(int i=0; i<8; i++){
        std::cout << pp_new[i] << std::endl; 
    }

    

}

