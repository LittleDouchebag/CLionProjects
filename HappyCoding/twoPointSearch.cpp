//
// Created by Lenovo on 2018/12/14.
//
#include <iostream>
#include <vector>
#include "twoPointSearch.h"
using std::string;
using std::cout;
using std::endl;
using std::vector;

void twoPointSearch(){
    vector<int> array = {1,2,3,4,5,6,7,8,9,10,11,23,565,780};
//    if you are looking for:
    int look4 = 565;
    for (auto current = array.begin() + array.size()/2;;) {
        if ((*current)>look4)
            current -= (current-array.begin())/2-1;
        else if ((*current)<look4)
            current += (array.end()-current)/2+1;
        else{
            cout<<look4<<" is at arrry."<<current-array.begin()<<endl;
            break;
        }
    }
}