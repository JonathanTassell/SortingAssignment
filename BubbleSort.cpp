#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> list){


    int out, in; 
    bool checked; 

    std::vector<int> new_list = list; 
    int n = list.size(); 
    int copy; 

    for(in=0; in<n-1; in++)
    {
        checked = false; 
        for(out=0; out < n-in-1; out++)
        {
            if(new_list[out] > new_list[out +1])
            {
                copy = new_list[out]; 

                new_list[out] = new_list[out+1]; 
                new_list[out+1] = copy; 
                
                checked = true; 
            }
        }
        
        if(checked == false)
            break; 
    }
    return new_list; 
}