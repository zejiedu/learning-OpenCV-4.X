## 模板类与类模板、函数模板与模板函数等的区别



　　在C++中有好几个这样的术语，但是我们很多时候用的并不正确，几乎是互相替换混淆使用：  

- 函数指针——指针函数
- 数组指针——指针数组
- 类模板——模板类
- 函数模板——模板函数　

**1.函数指针——指针函数**  

　　函数指针的重点是指针。表示的是一个指针，它指向的是一个函数，例子：

　　int   (*pf)();  

　　指针函数的重点是函数。表示的是一个函数，它的返回值是指针。例子：  

　　int*   fun();  

**2.数组指针——指针数组**  

　　数组指针的重点是指针。表示的是一个指针，它指向的是一个数组，例子：  

　　int   (*pa)[8];  

　　指针数组的重点是数组。表示的是一个数组，它包含的元素是指针。例子;  

　　int*   ap[8];  

**3.类模板——模板类（class   template——template   class）**  

　　类模板的重点是模板。表示的是一个模板，专门用于产生类的模子。例子：  

```cpp
 template <typename T>
 class Vector
 {
     ...
 };
```

　　使用这个Vector模板就可以产生很多的class（类），Vector<int>、Vector<char>、 Vector<   Vector<int>  >、Vector<Shape*>……。  

　　模板类的重点是类。表示的是由一个模板生成而来的类。例子：  

　　Vector<int>、Vector<char>、……全是模板类。

> 类模版 （class template）说明的是该类是一个模版，它代表的是整个类家族的[参数化](http://www.so.com/s?q=%E5%8F%82%E6%95%B0%E5%8C%96&ie=utf-8&src=internal_wenda_recommend_textn)描述。
>
> 模版类 （template class）通常被用于下面几个方面：
> （1）作为类模版的同义词
> （2）从模版产生类
> （3）具有一个template-id名称的类。（template-id指的是模版名称与紧随其后的尖[括号](http://www.so.com/s?q=%E6%8B%AC%E5%8F%B7&ie=utf-8&src=internal_wenda_recommend_textn)内部的所有实参的组合）
> 第二个和第三个含义区别是很细微的，它们的这些区别无关紧要。

**4.函数模板——模板函数（function   template——template   function）**  

　　函数模板的重点是模板。表示的是一个模板，专门用来生产函数。例子：  

```cpp
template   <typename   T>  
void   fun(T   a)  
{  
 　　...
}   
```

　　在运用的时候，可以显式（explicitly）生产模板函数，fun<int>、fun<double>、fun<Shape*>……。  

　　也可以在使用的过程中由编译器进行模板参数推导，帮你隐式（implicitly）生成。  

　　fun(6);//隐式生成fun<int>  

　　fun(8.9);//隐式生成fun<double>  

　　fun(‘a’);//   隐式生成fun<char>  

　　Shape*   ps   =   new   Cirlcle;  

　　fun(ps);//隐式生成fun<Shape*>  

　　模板函数的重点是函数。表示的是由一个模板生成而来的函数。例子：  

　　上面显式（explicitly）或者隐式（implicitly）生成的fun<int>、fun<Shape*>……都是模板函数。  

　　

　  从文章的讨论中，可以看到，名字是非常重要的，如果对名字的使用不恰当的话，会引起很多的麻烦和误解。我们在实际的程序中各种标识符的命名也是一门学问，为了清晰易懂，有时候还是需要付出一定的代价。  

　　> 最后提醒：在本文的几个术语中，语言的重心在后面，前面的词是作为形容词使用的。

 

 

　　转自：http://blog.sina.com.cn/s/blog_8b6cb0930100xair.html

