//
// Created by Lenovo on 2018/12/10.
//
#include <iostream>
#include "p66.h"
#include "Sales_data.h"

void p66() {
    Sales_data salesData1, salesData2;
    std::cout << "please enter the ISBN,amounts sold and the average price of saleData1:" << std::endl;
    std::cin >> salesData1.ISBN >> salesData1.amount >> salesData1.price_per_book;
    std::cout << salesData1.ISBN << "\t" << salesData1.amount << "\t" << salesData1.price_per_book << std::endl;
    std::cout << "please enter the ISBN,amounts sold and the average price of saleData2:" << std::endl;
    std::cin >> salesData2.ISBN >> salesData2.amount >> salesData2.price_per_book;
    std::cout << salesData2.ISBN << "\t" << salesData2.amount << "\t" << salesData2.price_per_book << std::endl;

    if (salesData1.ISBN==salesData2.ISBN){
        int total_amount=salesData1.amount+salesData2.amount;
        double average_price = salesData1.price_per_book*salesData1.amount+salesData2.price_per_book*salesData2.amount;
        average_price/=total_amount;
        std::cout << salesData1.ISBN << "\t" << total_amount<< "\t" << average_price << std::endl;
    }
    else
        std::cout << "ISBN must be the same!" << std::endl;
};