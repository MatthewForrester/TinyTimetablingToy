#include <iostream>

// #define INTEGER_CHECK
// Will need to add a check that strings contain integers
// Iterate through each character to check 0..9 or does std:: have a way to do this?

#ifdef INTEGER_CHECK
int checkInteger(int value)
{
    return 0;
}
#endif

int main()
{
    std::cout << "Welcome to Tiny Timetabling Tool" << std::endl;
    return 0;
}