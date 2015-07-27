#include <iostream>
#include "progress.h"

using namespace std;

int main() {
    progress p1(100, 10, '+');
    cout<<p1<<endl;
    p1.set_current(20);
    cout<<p1<<endl;
    p1.set_current(80);
    cout<<p1<<endl;

    return 0;
}
