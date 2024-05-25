#include <iostream>
#include "neo.h"
#include "tools.h"

using namespace std;

int main(int argc, char **argv)
{
    cout << "Main.cpp Hello, world!" << endl;

    Neo neo;
    neo.hello();

    Tools tools;
    tools.hello();

    return 0;
}
