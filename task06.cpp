#include<iostream>
using namespace std;
float pricestodio(string month, int no_of_stay);
float priceapartment(string month, int no_of_stay);
main()
{
    string month;
    int no_of_stay;
    float result1;
    float result2;
    cout<<"enter month ";
    cin>>month;
    cout<<"enter stays";
    cin>>no_of_stay;
    result1= pricestodio( month, no_of_stay);
    cout<<"studio:"<<result1 << endl;
    result2=priceapartment(month, no_of_stay);
    cout<<"apartment:"<<result2;

}
float pricestodio(string month, int no_of_stay)
{
    float price;
    float totalprice;
    if(month=="may"||month=="october"){
        price=no_of_stay*50;
        totalprice=price;
        if(no_of_stay>7 && no_of_stay <= 14)
        { 
            totalprice=price-(5/100)*price;
        }
        else if(no_of_stay>14)
        {
            totalprice=price - 0.3*price;
        }
    }
    else if(month=="june"||month=="september")
        {
            price=75.20*no_of_stay;
            totalprice=price;
            if(no_of_stay>14&&(month=="june"||month=="september"))
            {
            totalprice=price-(20/100)*price;
            }
        }
        else if(month=="july"||month=="august")
        {
            price=76*no_of_stay;
            totalprice=price;
        }
    
     return totalprice;
}
float priceapartment(string month, int no_of_stay)
{
    float price;
    float totalprice;
    if(month=="may"||month=="october")
    {
    totalprice=no_of_stay*65;
    }
    else if(month=="june"||month=="september")
    {
        totalprice=no_of_stay*68.70;
    }
    else if(month=="july"||month=="august")
    {
        totalprice=no_of_stay*77;
    }

    if(no_of_stay>14)
    {
        totalprice=totalprice-0.1*totalprice;
    }
    return totalprice;
}