//show hex and octal literals
#include<iostream>
int main(void)
{
    using namespace std;
    int chest = 42;//decimal
    int waist = 0x42;//hexadecimal
    int inseam = 042;//octal

    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << "waist = " << waist << " (0x42 in hex)\n";
    cout << "inseam = " << inseam << " (042 in octal)\n";
    return 0;
}
