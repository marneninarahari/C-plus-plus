#include<iostream>
using namespace std;

int main()
{
    int i;
    int n;
    int sum=0;

    cout<<"Enter the number that you want to find the sum:"<<endl;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
     cout<<i<<endl;
     sum=sum+i;
    }
    cout<<"sum is: "<<sum<<endl;
    return 0;
}
