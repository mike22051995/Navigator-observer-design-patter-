#include<iostream>
#include "CarRoute.cpp"
#include "WalkingRoute.cpp"
#include "Navigator.cpp"

int main(){
    CarRoute car;

    walkRoute walk;
    Navigator navigate(&walk);
    navigate.Navigate();
    return 0;





}