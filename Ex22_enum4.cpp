#include<iostream>
using namespace std;

enum Supercars{Venom=301, Veryon=268, Valkyrie=240, Roadster=250};

int main()
{
    Supercars speed1;
    Supercars speed2;

    speed1=Valkyrie;
    speed2=Roadster;

    if (speed1<speed2)
    {
        cout<<"It's a win for Roadster with speed"<<speed2<<endl;
    }
    else
    {
        cout<<"It's win for Valkyrie with speed"<<speed1<<endl;
    }
    return 0;
}
