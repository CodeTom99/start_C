#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <list>
#include <forward_list> 
using namespace std;
//STL六大部件
//容器 分配器 算法 迭代器 适配器 仿函数 
//算法：模板函数 例如 push find sort pop
//容器百万级别



//利用function template实现自动推导
template <class I,class T>
void func_impl(I iter, T t)
{
	T tmp;
}
template<class I>
inline
void func(I iter)
{
	func_impl(iter, *iter);
}
int main()
{
	int i = 5;
	func(&i);
	return 0;
}
  