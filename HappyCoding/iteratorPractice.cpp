//
// Created by Lenovo on 2018/12/14.
//
#include <iostream>
#include <vector>
#include "iteratorPractice.h"
using std::string;
using std::cout;
using std::endl;
using std::vector;

void iteratorPractice(){
    vector<int> v{1,2,3,4,5,6,7,8,9,10};
    for (auto current = v.begin(),end = v.end();current!=end;current++) {
        if (*current==4){
            *current++;
            v.push_back(100);
            v.push_back(200);
            end = v.end();
        }
    }
    for (auto i:v)
        i*=i;
    for (auto i:v)
        cout<<i<<" ";
    cout << endl;
    for (auto &i:v)
        i*=i;
    for (auto i:v)
        cout<<i<<" ";
    cout << endl;
}