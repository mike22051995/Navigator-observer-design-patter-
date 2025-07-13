#pragma once
class IRouteStrategy{
    public:
    virtual void calculateRoute()=0;
    virtual~IRouteStrategy()=default;
};
