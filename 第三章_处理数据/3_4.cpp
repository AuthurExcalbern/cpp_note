//dispaly values in hex and octal
#include<iostream>
int main(void)
{
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "chest = " << chest << " (42 in decimal)" << endl;
    cout << hex;
    cout << "waist = " << waist << " (42 in hex)" << endl;
    cout << oct;
    cout << "inseam = " << inseam << " (42 in octal)" << endl;
    return 0;
}
