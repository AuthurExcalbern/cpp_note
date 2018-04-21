# 函数探幽

* 内联函数：要在函数声明/定义前加上关键字inline
（区分内联函数于宏#define的区别）

* 引用变量：主要用途是作为函数的形参。
（会改变原始数据而不是副本）
    * int rats; int & rodents = rats;//必须声明的同时进行初始化
    * 应该多用const：double refcube（const double &ra）;
    * 如果传给函数的类型不符合会创建新的临时变量。

