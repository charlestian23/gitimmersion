#include <iostream>
#include <string>
#include "Greeter.h"

// This is a change
// This is another change
// Third comment
// Fourth comment
// Author: Charles (emailname@somewhere.com)

int main()
{
    std::cout << "Hello World!" << std::endl;
    std::cout << "I'm making a change" << std::endl;

    Greeter greet;
    cout << greet.getMessage("to the world") << endl;

    return 0;
}