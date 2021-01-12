#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            string arg = argv[i];
            cout << "Hello " + arg + "!" << endl;
        }            
    }
    else
    {
        cout << "Hello World!" << endl;
    }
    return 0;
}