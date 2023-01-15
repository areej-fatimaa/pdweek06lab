#include<iostream>
using namespace std;
float charges(char service, char time, int min);
main()
{
    char service;
    char time;
    int min;
    float result;
    cout<<"enter type of service";
    cin>>service;
    cout<<"enter time";
    cin>>time;
    cout<<"enter miutes you used service";
    cin>>min;
    result=charges(service,time,min);
    cout<<"charges are:"<<result<<"$";

}
float charges(char service, char time, int min)
{
    float money;
    if(service=='p'||service=='P'&& time=='d'&&min<=75)
    {
        money=25.00;
    }
    else if(service=='p'||service=='P'&&time=='d'&&min>75)
    {
        money=25.00+(min-75)*0.10;
    }
    else if(service=='p'||service=='P'&& time=='n'&&min<=100)
    {
         money=25.00;
    }
    else if(service=='p'||service=='P'&& time=='n'&&min>100)
    {
        money=25.00+(min-100)*0.05;
    }
    else if(service=='r'||service=='R'&&min<=50)
    {
        money=10.00;
    }
    else if(service=='r'||service=='R'&&min>50)
    {
        money=10.00+(min-50)*0.20;
    }
     return money;
}