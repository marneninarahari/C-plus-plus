#include<iostream>
using namespace std;

enum mobile{BatteryCapacity = 1, CameraQuality = 2, LargeStorage = 4};

int main()
{
    int features = CameraQuality | LargeStorage;
    cout<< features;
    return 0;
}
