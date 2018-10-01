#include <iostream>
#include "core/EventMessage.h"

using namespace std;
void start();
int main() 
{
    cout<<"CoinTradingBot started"<<endl;
    start();
    return 0;
}
void start() 
{
    cout<<"CoinTradingBot process running"<<endl;
    char * str = "test";
    EventMessage *evt = new EventMessage(1, 1, (void*)str);
    int cnt = 0;
    while(1) {
        if (cnt > 10 ) break;
        cout<<evt->getData()<<endl;
        cnt++;
    }
    delete(evt);
}
