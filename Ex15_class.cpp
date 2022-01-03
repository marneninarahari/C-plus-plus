#include<iostream>
using namespace std;

class Franchise
{
    public:
    void KFC()
    {
        cout<<"We have best chicken"<<endl;
    }
    void Burgerking()
    {
        cout<<"We have best Burger"<< endl;
    }
};
int main()
{
    Franchise fran;
    fran.KFC();
    fran.Burgerking();
    return 0;
}
