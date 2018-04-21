#复合类型

* 每次读取一整行字符串：
    * cin.getline(name, 20)将丢弃换行
    * cin.get(name, 20)将读入换行（两读入间有换行，应该多用一个cin.get()）
    (可以拼合为cin.get(name, 20).get()）
    * get()读取空行后设置失效位，getline()读到尾部时设置失效位，可以用cin.clear来恢复输入。

* String类
    * 可以拼接：str3 = str1 + str2;  str1 += str2;
    * 其他操作：strlen(charr); strcopy(charr1,charr2); strcat(charr1,charr2);

* 用new来分配内存：int * pn = new int; int * psome = new int [10];
(用delete释放内存：delete pn; delete [] psome;)

* 模板类vector：
    * 要用头文件：#include "vector",要用std::vector。
    * 声明：vector <"typeName"> vt(n_elem);

* 模板类array：
    * 要用头文件：#include "array",要用std::array。
    * array<"typeName, n_elem"> arr;
    * 可以将一个arr赋值给另一个arr。