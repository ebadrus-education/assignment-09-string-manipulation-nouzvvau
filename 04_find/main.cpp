#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "Apa kabar?";
    auto pos = a.find("kabar");
    cout << "Berada di index ke-" << pos << endl;
    return 0;
}