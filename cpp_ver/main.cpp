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

        cout<<"this is the "<<i<<" result:";
        for (int j = 0; j < gacha_times; ++j) {
            cout<<*(goal_arr+j)<<" ";
        }
        cout<<endl;

        while (true){

            bool find_result=is_get(goal_arr,current_badge,gacha_times);
            //cout<<(find_result?"true":"false")<<endl;
            if (outcome_badges_kinds==desired_badges_kinds){
                succeed++;
                break;
            }
            if (find_result){
                current_badge++;
                outcome_badges_kinds++;
                continue;
            }
            if (current_badge==badge_kinds)
            { break;}
            else {
                current_badge++;
            }
        }
    }














        /*std::vector<int>::iterator it;
        while (true){
            it = find(goal.begin(), goal.end(), current_badge);
            if (outcome_badges_kinds==desired_badges_kinds){
                succeed++;
                break;
            }
            if (it!=goal.end()){
                current_badge++;
                outcome_badges_kinds++;
                continue;
            } else{
                if (current_badge==badge_kinds){continue;}
                else {current_badge++;}
            }
        }  //end of while*/



    double prob=0;
    prob=succeed/(gacha_times*times_of_simulation);
    cout<<succeed<<endl;



    //cout<<desired_badges_kinds<<" "<<gacha_times<<endl;
    return 0;
}
