#include<iostream>
using namespace std;
string activity(string temperature, string humidity);
main()
{
  string temperature;
  string humidity;
  string result;
  cout<<"enter temperature";
  cin>>temperature;
  cout<<"enter humidity";
  cin>>humidity;
  result=activity(temperature, humidity);
  cout<<result;
}
string activity(string temperature, string humidity)
{
    string result;
    if(temperature=="warm"&& humidity=="dry")
    {
         result="play tennis";
    }
    else if(temperature=="warm"&& humidity=="humid")
    {
        result=="swim";
    }
    else if(temperature=="cold"&& humidity=="dry")
    {
        result="play basketball";
    }
    else if(temperature=="cold"&& humidity=="humid")
    {
        result=="watch tv";
    }
  return result;
   }
