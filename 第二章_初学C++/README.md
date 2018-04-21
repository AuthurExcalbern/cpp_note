# 名称空间
* 如果使用iostream，而不是iostream.h，就必须用**using namespace std;**
    * 按照这种方式，类、函数和变量便是C++编译器的标准组件，它们现在都被放在**名称空间std**中
    * 仅当头文件没有扩展名 h 时，情况才如此
    * 这意味着用于输出的cout变量实际上是**std::cout**
    * **标准做法**：只使所需的空间名称可用：**using std::cout** or **using std::endl**

* 让程序能访问名称空间的四种方法：
    * 将using namespace std;放在函数定义前
    * 将using namespace std;放在特定函数定义中
    * 在特定函数中用using std::cout
    * 完全不用using，用std::cout