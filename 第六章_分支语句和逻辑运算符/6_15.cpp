//outfile.ckpp -- writing to a file
#include <iostream>
#include <fstream>
int main()
{
    using namespace std;

    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;//creat object for output,associate with a file
    outFile.open("/home/xiong/桌面/C++Note/第六章/carinfo.txt");
//open的文件不存在时会新建一个文件，文件存在时会舍弃文件内的内容！

    cout << "Enter the make and model of automobile: ";
    cin.getline(automobile, 50);
    cout << "Enter the model year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

//display information on screen with cout

    cout << fixed;//表示用一般方法输出浮点数，像0.0000001而非1e-008
    cout.precision(2);//表示只输出两位小数（第二位小数四舍五入
    cout.setf(ios_base::showpoint);//强制显示浮点数小数点后的0 
    cout << "Make and model: " << a_price << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking $" << a_price << endl;
    cout << "Now asking $" << d_price << endl;

//now do exact same things using outFile instead of cout

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Make and model: " << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was asking $" << a_price << endl;
    outFile << "Now asking $" << d_price << endl;

    outFile.close();
    return 0;//done with file
}
