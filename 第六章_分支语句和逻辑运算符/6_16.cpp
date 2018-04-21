//sumafile.cpp -- function with an array argument
#include <iostream>
#include <fstream>//file I/O support
#include <cstdlib>//sopport for exit()
const int SIZE = 60;
int main()
{
    using namespace std;
    char filename[SIZE];
    ofstream outFile;
    ifstream inFile;//object for handling file input

    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);

    outFile.open("/home/xiong/桌面/C++Note/第六章/scores.txt");
    outFile << "18 19 18.5 13.5 14" << endl;
    outFile << "16 19.5 20 18 12 18.5" << endl;
    outFile << "17.5"  << endl;//如果不加endl就不能读到17.5！！！
    outFile.close();

    inFile.open(filename);
    if(!inFile.is_open())
    {
        cout << "Could not open the file.\n";
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;

    inFile >> value;
    while(inFile.good())//good()是测试最后一次输入是否成功，也可以用while(inFile >> value)
    {
        ++count;
        sum += value;
        inFile >> value;
    }
    if(inFile.eof()) cout << "End of file reached.\n";
    else if(inFile.fail()) cout << "Input terminated by data mismatch.\n";
    else cout << "Input terminated for unknow reason.\n";
    if(count == 0) cout << "No data processed.\n";
    else
    {
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }
    inFile.close();
    return 0;
}
