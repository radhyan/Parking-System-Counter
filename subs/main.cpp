#include <iostream>
using namespace std;

int time(int timeArrive, int timeExit)
{
    int total = 0;
    total = (timeExit / 100) * 60 + (timeExit % 100) - (timeArrive / 100) * 60 + (timeArrive % 100);
    return total;
}

double parkingFee(int minutesTotal)
{
    int fee;
    
    if (minutesTotal <= 30){
        return fee = 0;
        
    }
    else if (120 > minutesTotal && minutesTotal < 30){
        return fee = (0.05 * minutesTotal);
    }
    else{
        return fee = (0.10 * minutesTotal);
    }

}
void print_results(double charge)
{
    cout << "The charge of parking was: " << charge;
}

int main()
{
    double fee,minutes;
    int timeArrive,timeExit;
    cout<<"What was the entry time? (Enter in 24 hour time with no colon) ";
    cin>>timeArrive;

    cout<<"What was the exit time? (Enter in 24 hour time with no colon) ";
    cin>>timeExit;

    minutes=time(timeArrive,timeExit);
    fee=parkingFee(minutes);

    cout<<"Your total parking fee is Rp "<<fee<<"000";

}
