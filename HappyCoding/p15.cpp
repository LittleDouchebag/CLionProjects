//
// Created by Lenovo on 2018/11/23.
//

//统计输入中每个值连续出现了多少次
#include <iostream>
#include "p15.h"
void p15(){
//    First number
    std::cout<<"Enter the numbers my friend"<<std::endl;
    int input;
    int count[10]={0,0,0,0,0,0,0,0,0,0};
    while (std::cin>>input){
        if (input>9||input<0)
            std::cout<<"(0~9) my friend"<<std::endl;
        count[input]++;
    }
    for (int i = 0; i < 10; ++i) {
        if (count[i]!=0)
            std::cout<<i<<" has occered "<<count[i]<<"times"<<std::endl;
    }
    std::cin.clear();
//    then chars
    std::cout<<"Enter the chars my friend"<<std::endl;
    char input2;
    int count2[26]={0};
    while (std::cin>>input2){
        if (input2>'z'||input2<'a')
            std::cout<<"(a~z) my friend"<<std::endl;
        count2[input2-'a']++;
    }
    for (int i = 0; i < 26; ++i) {
        if (count2[i]!=0)
            std::cout<<(char)(i+'a')<<" has occured "<<count2[i]<<" times"<<std::endl;
    }
}