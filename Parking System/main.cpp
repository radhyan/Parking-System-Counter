#include <iostream>

using namespace std;

int time(int hourArrive, int minuteArrive, int secondArrive, int hourExit, int minuteExit, int secondExit){
        
    int time1 = (hourArrive*60)*60+(minuteArrive*60)+secondArrive;
    int time2 = (hourExit*60)*60+(minuteExit*60)+secondExit;
    int totalTime = time2 - time1;
        
    int ss = totalTime%60;
    int minute = (totalTime-ss)/60;
        
    return minute;
}

int parkingFee(int type, int minuteElapsed){
    int charge = 0;
    int time = (minuteElapsed-(minuteElapsed%60))/60;
    
    if (type == 2){
        if (minuteElapsed<10){
            charge = 0;
        } else {
            return charge = (time * 3000) + 2000;
        }
    } else {
        if (minuteElapsed<20){
            charge = 0;
        } else {
            return charge = (time * 4000) + 3000;
        }
    }
    return charge;
}

int main(){
    int hourArrive, minuteArrive, secondArrive, hourExit, minuteExit, secondExit, type;
    
    cout<<"\n==================================";
    cout<<"\n========= Parking System =========";
    cout<<"\n==================================";
    cout<<"\nInput how many wheel vehicle have";
    cout<<"\n 2 for Motorcycle || 4 for car";
    cout<<"\n=================================="<<endl;
    
    cout<<"Input here: "; cin>>type;
    
    cout<<"\n==================================";
    cout<<"\n= Input arrival time (hh mm ss) =";
    cout<<"\n=================================="<<endl;
    
    cout<<"Input here: "; cin>>hourArrive>>minuteArrive>>secondArrive;
    
    cout<<"\n==================================";
    cout<<"\n=== Input exit time (hh mm ss) ===";
    cout<<"\n=================================="<<endl;
    
    cout<<"Input here: "; cin>>hourExit>>minuteExit>>secondExit;
    
    cout<<"\n=================================="<<endl;
    
    int minuteElapsed = time(hourArrive, minuteArrive, secondArrive, hourExit, minuteExit, secondExit);
    
    int hour = (minuteElapsed-(minuteElapsed%60))/60;
    
    
    cout<<"Time parked \nfrom: \t\t\t\t\t"<< hourArrive << ":" << minuteArrive << ":" << secondArrive;
    cout<<"\nto: \t\t\t\t\t"<< hourExit << ":" << minuteExit << ":" << secondExit;
    cout<<"\n\nTotal hour parked: \t\t"<< hour << " hour";
    cout<<"\n\nYour parking fee is: \tRp "<< parkingFee(type, minuteElapsed)<<endl<<endl;
}
