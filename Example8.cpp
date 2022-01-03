#include <cstdio>

#include <iostream>

using namespace std;

int main(){

    char buf[100];

    int return_Val;

    char my_name[] = "Simplilearn";

    char topic[] = "tutorials";

    return_Val = sprintf(buf, "Welcome to %s you can read various programming %s here!!", my_name, topic);

    cout << buf << endl;

    cout << "Total characters written are: " << return_Val << endl;

    return 0;

}
