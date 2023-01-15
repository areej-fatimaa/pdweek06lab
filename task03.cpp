#include<iostream>
using namespace std;
string zodiac(int day, string month);
main()
{
   int day;
   string month;
   string zodiacsign;
   cout<<"enter day";
   cin>>day;
   cout<<"enter month";
   cin>>month;
zodiacsign=zodiac(day, month);
cout<<zodiacsign;

}
string zodiac(int day, string month)
{
    string zodiacsign;
    if(month=="march"&&day>=21 ||month=="april"&& day<=19)
    {
        zodiacsign="aries";
    }
   if(month=="april"&&day>=20 ||month=="may"&& day<=20)
    {
        zodiacsign="taurus";
    } 
    if(month=="may"&&day>=21 ||month=="june"&& day<=20)
    {
        zodiacsign="gemini";
    }
    if(month=="june"&&day>=21 ||month=="july"&& day<=22)
    {
        zodiacsign="cancer";
    }
    if(month=="july"&&day>=23 ||month=="august"&& day<=22)
    {
        zodiacsign="leo";
    }
    if(month=="august"&&day>=23 ||month=="september"&& day<=22)
    {
        zodiacsign="virgo";
    }
    if(month=="september"&&day>=23 ||month=="october"&& day<=22)
    {
        zodiacsign="libra";
    }
    if(month=="october"&&day>=23 ||month=="november"&& day<=21)
    {
        zodiacsign="scorpio";
    }
    if(month=="november"&&day>=22 ||month=="december"&& day<=21)
    {
        zodiacsign="sagittarius";
    }
    if(month=="december"&&day>=22 ||month=="january"&& day<=19)
    {
        zodiacsign="capricorn";
    }
    if(month=="january"&&day>=20||month=="february"&& day<=18)
    {
        zodiacsign="aquarius";
    }
    if(month=="february"&&day>=19 ||month=="march"&& day<=20)
    {
        zodiacsign="pisces";
    }
    return zodiacsign;
}