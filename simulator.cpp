//
// Created by LENOVO on 2021/3/17.
//

#include "simulator.h"
#include <iostream>
using namespace std;
int get_param(const string& prompt){
    int result=1;
    cout<<prompt;
    cin>>result;
    return result;
}