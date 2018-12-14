//
// Created by Lenovo on 2018/11/23.
//
#include <iostream>
#include "p13.h"
void p13(){
    std::cout << "Enter the numbers:"<<std::endl;
    int sum=0,input;
    while (std::cin>>input){
        sum+=input;
    }
    std::cout<<sum<<std::endl;
}