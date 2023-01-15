#include<iostream>
using namespace std;
string point(int coordx, int coordy, int size);
main()
{
 int coordx;
 int coordy;
 int size;
 string result;
 cout<<"enter coordx";
 cin>>coordx;
 cout<<"enter coody";
 cin>>coordy;
 cout<<"enter value of h";
 cin>>size;
 result= point(coordx, coordy, size);
 cout<<result;
}
string point(int coordx, int coordy, int size)
{ 
    string str;
    if(((coordx>0)&&(coordx<3*size)) && (coordy>0)&&(coordy<size))
    {
        str="inside";
    }
    else if(((coordx>size)&&(coordx<2*size)) && (coordy>0)&&(coordy<4*size))
    {
      str="inside";   
    }
    else if(((coordx>=size)&&(coordx<=2*size)) && (coordy>=0)&&(coordy<=4*size))
    {
       str="border";
    }
    else if(((coordx>=0)&&(coordx<=3*size)) && (coordy>=0)&&(coordy<=size))
    {
        str="border";
    }
    else
    {
        str="outside";
    }
    return str;
}