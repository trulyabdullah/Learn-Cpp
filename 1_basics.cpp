// don't go too in-depth or you will get stuck in beginning
// learn basics without digging deep. you will learn automatically when learning medium and hard levels.

// skeleton of C++ code
#include <iostream> //for input and output

int main()
{
    // cout is a function inside std
    std ::cout << "Hello World!";
    std ::cout << "Hello World!";

    // use \n for new line
    std ::cout << "Hello World!" << "\n";
    std ::cout << "Hello World!";

    // you can also use endl for the same but \n is faster hence it is preferred.
    std ::cout << "Hello World!" << std::endl;  
    std ::cout << "Hello World!";

    // you can give a lot of statements in one line
    std ::cout << "Hey" << std::endl
               << "Abdullah" << std::endl
               << "How" << "\n"
               << "are you?";
    return 0;
}