#include<iostream>
using namespace std;
float calculateprice(string day, string fruit, int quantity);
main()
{
    string fruit;
    string day;
    int quantity;
    float price;
    cout<<"enter fruit name";
    cin>>fruit;
    cout<<"enter day";
    cin>>day;
    cout<<"enter quantity";
    cin>>quantity;
    price=calculateprice(day, fruit, quantity);
    if(price=-1)
    {
        cout<<"error";
    }
    else
    {
    cout<<"price is "<<price;
    } 
}
float calculateprice(string day, string fruit, int quantity)
{
    
        float price;
        string error="error";
    if(day=="monday"||day=="tuesday"||day=="wednesday"||day=="thursday"||day=="friday")
    {
        if(fruit=="banana")
        {
            price=quantity*2.50;
        }
        else if(fruit=="apple")
        {
            price=quantity*1.20;
        }
        else if(fruit=="orange")
        {
            price=quantity*0.80;
        }
        else if(fruit=="grapefruit")
        {
            price=quantity*1.45;
        }
       else if(fruit=="kiwi")
        {
            price=quantity*2.70;
        }
        else if(fruit=="pineapple")
        {
            price=quantity*5.50;
        }
        else if(fruit=="grapes")
        {
            price=quantity*3.85;
        }
    }
    else if(day=="saturday"||day=="sunday")
    {
        if(fruit=="banana")
        {
            price=quantity*2.70;
        }
        else if(fruit=="apple")
        {
            price=quantity*1.25;
        }
        else if(fruit=="orange")
        {
            price=quantity*0.90;
        }
        else if(fruit=="grapefruit")
        {
            price=quantity*1.60;
        }
        else if(fruit=="kiwi")
        {
            price=quantity*3.00;
        }
        else if(fruit=="pineapple")
        {
            price=quantity*5.60;
        }
        else if(fruit=="grapes")
        {
            price=quantity*4.20;
        }
    }
    return price;
}