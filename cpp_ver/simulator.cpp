//
// Created by LENOVO on 2021/3/17.
//

#include "simulator.h"
#include <iostream>

#include <vector>
int Get_param(const string& prompt){
    int result=1;
    cout<<prompt;
    cin>>result;
    return result;
}
bool is_get(int* arr,int target,int arr_size){
    for (int i = 0; i < arr_size; ++i) {
        if (*(arr+i)==target){
            return true;
        }
    }
    return false;
}