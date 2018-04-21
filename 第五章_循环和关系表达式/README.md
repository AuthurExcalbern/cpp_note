# 循环和关系表达式

* 可以用cout.self(ios_base::boolalpha);输出bool类的ture和flase。

* 等待一段时间：编写延时循环
    * 符号常量CLOCKS_PER_SEC：该常量等于每秒钟包含的系统时间单位数
    * 系统时间 = CLOCKS_PER_SEC * 秒数
    
* while(scanf() != EOF)  等于  while(cin.fail() == false)
   while(ch != EOF)       ||      while((ch = cin.get()) != EOF)