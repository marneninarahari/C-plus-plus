#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>V;
    for(int x=1; x<=10; x++)
    {
        V.push_back(x);
    }
    cout<<"Vector size is:"<<V.size()<<endl;

    cout<<"Capacity of vector is: "<<V.capacity()<<endl;

    cout<<"Maximum size of vector is: "<<V.max_size()<<endl;

    V.resize(5);

    cout<<"Vector size after resizing is: "<<V.size()<<endl;

    if(V.empty()==false)
    {
        cout<<"Vector is not empty"<<endl;
    }
    else
    {
        cout<<"Vector is empty"<<endl;
    }

}
