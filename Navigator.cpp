#include<iostream>
#include "IRouteStrategy.h"
using namespace std;

class Navigator{
    public:
    IRouteStrategy* strategy ;
    Navigator(IRouteStrategy* s):strategy(s){}

    void SetStrategy(IRouteStrategy* S){
        strategy=S;
    }
    void Navigate(){
        strategy->calculateRoute();
    }


};