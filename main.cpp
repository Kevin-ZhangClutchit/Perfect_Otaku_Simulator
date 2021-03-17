#include <iostream>
#include <string>
#include "simulator.h"
using namespace std;


int main() {
    string badge_prompt="Please input the kinds of badges you desired: ";
    string chances_prompt="Please input how many times you will gacha: ";
    int desired_badges=0,gacha_times=0,goods_kinds=30,badge_kinds=10,outcome_badges_kinds=0;
    desired_badges=get_param(badge_prompt);
    gacha_times=get_param(chances_prompt);
    cout<<desired_badges<<" "<<gacha_times<<endl;
    cout << "Hello, World!" << endl;
    return 0;
}
