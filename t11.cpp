#include <iostream>
using namespace std;
string checkSpeed(float speed);
main(){
    float speed;
    cout<<"Enter the speed: ";
    cin>>speed;
    // checkSpeed(speed);
    cout<<checkSpeed(speed);
}
string checkSpeed(float speed){
if(speed <= 10){
    string result = "slow";
    return result;
}
if(speed > 10 && speed <= 50){
    string result = "average";
    return result;
}
if(speed > 50 && speed <= 150){
    string result = "fast";
    return result;
}
if(speed > 150 && speed <= 1000){
    string result = "ultra-fast";
    return result;
}
if(speed >= 3500){
    string result = "extremely fast";
    return result;
}
}