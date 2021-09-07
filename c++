1. 打印
    （1）
        using namespace std;
        cout<<  <<endl;
     (2)
        std::cout<<   <<std::endl:
        endl()表示打印换行

2. 析构函数
    类的析构函数是类的一种特殊的成员函数，它会在每次删除所创建的对象时执行。
    析构函数的名称与类的名称是完全相同的，只是在前面加了个波浪号（~）作为前缀，它不会返回任何值，也不能带有任何参数。析构函数有助于在跳出程序（比如关闭文件、释放内存等）前释放资源。
    注意：
        系统只会自动释放栈内空间，而堆内空间需要用户自己维护。
        单纯的创建对象的时候，对象存放在栈中，此时在程序块的后面，系统会自动调用析构函数，释放掉栈空间
        但是，如果创建了指向new来的一块空间的指针的时候，如果在没有显示释放掉new到的堆空间时，系统是不会自动调用析构函数去释放栈空间中的指针的。

3. ++i比i=++运行速度快

4. count函数用法
    使用方法是count（begin，end，‘a’），其中begin指的是起始地址，end指的是结束地址，第三个参数指的是需要查找的字符。

5. unordered_map 
    #include <hash_map>
    C++ 11标准中加入了unordered系列的容器。unordered_map记录元素的hash值，根据hash值判断元素是否相同,unordered_map内部元素是无序的.
    unordered_map感觉速度和hash_map差不多，但是支持string做key，也可以使用复杂的对象作为key。
    
6. pair的应用
    pair是将2个数据组合成一组数据，当需要这样的需求时就可以使用pair，如stl中的map就是将key和value放在一起来保存。另一个应用是，当一个函数需要返回2个数据的时候，可以选择pair。
    pair的实现是一个结构体，主要的两个成员变量是first second 因为是使用struct不是class，所以可以直接使用pair的成员变量。
    eg：
        pair<string, int> name_age("Tom", 18);
    对比maike_pair
    make_pair的用法  无需写出型别， 就可以生成一个pair对象 
    eg:
      make_pair(42, '@'); 
      
7. C++中没有嵌套函数     main函数中也不能定义函数
    
