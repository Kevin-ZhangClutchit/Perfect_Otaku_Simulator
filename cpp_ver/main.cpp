#include <iostream>
#include <string>
#include "simulator.h"
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;


int main() {
    string badge_prompt="Please input the kinds of badges you desired:";
    string chances_prompt="Please input how many times you will gacha:";
    string times_prompt="Please input how many times you will simulate:";
    int desired_badges_kinds=0,gacha_times=0,goods_kinds=30,badge_kinds=10,succeed=0,times_of_simulation=1;
    desired_badges_kinds=Get_param(badge_prompt);
    gacha_times=Get_param(chances_prompt);
    times_of_simulation=Get_param(times_prompt);

    srand(int(time(nullptr)));

    //main simulator
    for (int i = 0; i < times_of_simulation; ++i) {
        int outcome_badges_kinds=0,current_badge=1;
        int goal_arr[gacha_times];
        for (int j = 0; j < gacha_times; ++j) {
            int result=rand()%(goods_kinds-1)+1;
            *(goal_arr+j)=result;
        }

        cout<<"we are undergoing "<<i+1<<" times simulation.";
        /*for (int j = 0; j < gacha_times; ++j) {
            cout<<*(goal_arr+j)<<" ";
        }*/
        cout<<endl;
        for (int j = 0; j < badge_kinds; ++j) {
            if (is_get(goal_arr,j+1,gacha_times)){
                outcome_badges_kinds++;
            }
        }
        succeed=(outcome_badges_kinds==desired_badges_kinds)?succeed+1:succeed;

    }






    double prob=0;
    cout<<"succeed times: "<<succeed<<endl;
    auto double_succeed=double (succeed);
    auto double_times=double (times_of_simulation);
    prob=double_succeed/double_times;
    cout<<"result prob: "<<prob<<endl;



    //cout<<desired_badges_kinds<<" "<<gacha_times<<endl;
    cout<<"Press any letter to exit:"<<endl;
    char tmp;
    cin>>tmp;
    return 0;
}
