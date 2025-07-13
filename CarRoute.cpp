#include<iostream>
#include "IRouteStrategy.h"
using namespace std;
class CarRoute:public IRouteStrategy{
    public:
    virtual void calculateRoute() override{
        cout<<"calculating car route distance:---20km"<<endl;
    }
    
};

