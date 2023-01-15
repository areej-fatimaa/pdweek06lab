#include<iostream>
using namespace std;
string gradeis(int obt_marks);
main()
{
   string name;
   int english;
   int math;
   int chem;
   int social;
   int bio;
   cout<<"enter name";
   cin>>name;
   cout<<"enter eng  marks";
   cin>>english;
   cout<<"enter math marks";
   cin>>math;
   cout<<"enter chemistry marks";
   cin>>chem;
   cout<<"enter social science marks";
   cin>>social;
   cout<<"enter biology marks";
   cin>>bio;
   int total=500;
   int obt_marks;
   float percentage;
   string grade;
   obt_marks=english+math+chem+social+bio;
    cout<<"total marks = "<<obt_marks<<endl;
   percentage= (obt_marks/total)*100;
   cout<<"percentage= "<<percentage<<endl;
   grade=gradeis(obt_marks);
   cout<<"grade is "<<grade;
}
string gradeis(int obt_marks)
{
    string grade;
    if(obt_marks>=90||obt_marks<=100)
    {
    grade="A+";
    }
    else if(obt_marks>=80||obt_marks<=90)
    {
        grade="A";
    }
    else if(obt_marks>=70||obt_marks<=80)
    {
        grade="B+";
    }
    else if(obt_marks>=60||obt_marks<=70)
    {
        grade="B";
    }
    else if(obt_marks>=50||obt_marks<=60)
    {
        grade="C";
    }
     else if(obt_marks>=40||obt_marks<=50)
    {
        grade="D";
    }
     else if(obt_marks<40)
    {
        grade="F";
    }

    return grade;
}