#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
     // automatically uses std for all functions
     cout << "Hello World" << endl
          << "hey";
     cout << "\n";

     // taking input
     int x;
     cin >> x;
     cout << "Value of x : " << x << "\n";

     int a, b;

     // first things go into first variable in cin.
     cin >> a >> b;
     cout << "Value of a is : " << a << endl
          << "Value of b is : " << b << endl;
     return 0;
}
