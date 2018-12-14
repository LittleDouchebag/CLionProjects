//
// Created by Lenovo on 2018/12/10.
//
#include <iostream>
#include <vector>
#include "range4practice.h"
using std::string;
using std::cout;
using std::endl;
using std::vector;

void range4practice(){
    string test = "where am I???";
    for (char c : test) {
//        std::cout<<c<<"\n"<<std::endl;
        if (isalpha(c))
            std::cout<<c<< std::endl;
    }

    vector<int> v{1,2,3,4,5,6,7,8,9,10};
    for (auto i:v)
        i*=i;
    for (auto i:v)
        cout<<i<<" ";
    cout << endl;

}