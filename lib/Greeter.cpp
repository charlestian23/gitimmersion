#include <iostream>
#include <string>
#include "Greeter.h"

using namespace std;

string Greeter::getMessage(string name)
{
    return "Hello " + name + "!";
}

// int main(int argc, char *argv[])
// {
//     if (argc > 1)
//     {
//         for (int i = 1; i < argc; i++)
//         {
//             string arg = argv[i];
//             cout << "Hello " + arg + "!" << endl;
//         }            
//     }
//     else
//     {
//         cout << "Hello World!" << endl;
//     }
//     return 0;
// }