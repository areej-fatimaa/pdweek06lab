#include<iostream>
using namespace std;
int checktimeH( int timestarting, int timearrive);
main()
{
    int startingtimeH;
    int startingtimeM;
    int studentarriveH;
    int studentarriveM;
    int result1;
    int timestarting;
    int timearrive;
    int timeH;
    int timeM;
    cout<<"enter starting time H";
    cin>>startingtimeH;
    cout<<"enter starting time M ";
    cin>>startingtimeM;
    cout<<"student hour of arrivel";
    cin>>studentarriveH;
    cout<<"student minute of arrival";
    cin>>studentarriveM;
    timestarting=startingtimeH*60+startingtimeM;
    timearrive=studentarriveH*60+studentarriveM;
    result1=checktimeH(timestarting, timearrive);
    timeH=result1/60;
    timeM=result1%60;
    if(timeH==startingtimeH&&timeM==startingtimeM)
    {
        cout<<"on time";
    }
    else if(timeH>startingtimeH ||timeM>startingtimeM)
    {
        cout<<"late"<<endl;
        cout<<timeH<<":"<<timeM<<"after start";
    }
    else if(timeH<startingtimeH ||timeM<startingtimeM)
    {
        cout<<timeH<<":"<<timeM<<"before time";
    }
}
int checktimeH( int timestarting, int timearrive) 
{
    int time;
    if(timestarting==timearrive)
    {
        time=0;
    }
    else if(timestarting>timearrive)
    {
        time=timestarting-timearrive;
    }
    else if(timestarting<timearrive)
    {
        time=timearrive-timestarting;
    }
    return time;
}