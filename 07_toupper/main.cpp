#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string nama = "nazwa";
    nama[0] = toupper(nama[0]);
    cout << nama << endl;
    return 0;
}