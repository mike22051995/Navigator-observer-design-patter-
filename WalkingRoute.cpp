#include<iostream>
#include "IRouteStrategy.h"
using namespace std;
class walkRoute:public IRouteStrategy{
    public:
    void calculateRoute() override{
        cout<<"calculating walking path distance and time"<<endl;

    }

};
