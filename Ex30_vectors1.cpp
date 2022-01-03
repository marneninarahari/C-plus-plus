#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>n;
    n.assign(9, 1);
    cout<<"The elements of n are:"<<endl;
    for(int a=0; a<n.size(); a++)
    {
        cout<<n[a]<<" ";
        cout<<endl;
    }
    n.push_back(2);
    int no=n.size();
    cout<<"Last element is: "<<n[no-1]<<endl;
    n.pop_back();
    cout<<"After pop back, the elements are: "<<endl;
    for(int a=0; a<n.size(); a++)
    {
        cout<<n[a]<<" ";
        cout<<endl;
    }
    n.insert(n.begin(), 7);
    cout<<"The first element is: "<<n[0]<<endl;
    n.clear();
    cout<<"Now (after clear) the size of n is: "<<n.size()<<endl;
}
