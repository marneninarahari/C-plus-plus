#include<iostream>
using namespace std;

enum captain{Avi, Sid, Robby, Sami, Jake};

int main()
{
captain cap=Sami;

if (cap==Avi)
{
    cout<<"Out captain is Avi and its value is :" << Avi<<endl;
}
else
{
    cout<<"He is not our captain";
}
return 0;
}
