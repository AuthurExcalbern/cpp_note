//waiting.cpp -- using clock() in a time-delay loop
//符号常量CLOCKS_PER_SEC：该常量等于每秒钟包含的系统时间单位数
//系统时间 = CLOCKS_PER_SEC * 秒数
#include <iostream>
#include <ctime>//describes clock() function, clock_t type
int main()
{
    using namespace std;
    cout << "Enter the delay time, in seconds:";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;//convert to clock tick
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() - start < delay)//wait until time elapses
    ;//note the semicolon
    cout << "done\a\n";
    return 0;
}
