/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: vivek
 *
 * Created on 20 January, 2019, 10:29 PM
 */

#include <iostream>
#include <bitset>
#include <set>
//1 2 4 8 16 32 64 128

std::set<int> getNumbers(int n) {
    std::set<int> NumberSet;
    int i = 0;
    int m = 1;
    while (i < 8) {
        int sum = n & m << i; //0000 0101
        if (sum == 0) //0000 0001 
        {
            i++;
            continue;
        } else {
            NumberSet.insert(sum);
        }
        i++;
    }
    return NumberSet;
}

main(int argc, char const *argv[]) {
    std::set<int> TradeNumber;
    int x;
    std::cin>>x;
    TradeNumber = getNumbers(x);
    for (auto itr = TradeNumber.begin(); itr != TradeNumber.end(); itr++) {
        std::cout << "Number: " << *itr << "\n";
    }
    return 0;
}

