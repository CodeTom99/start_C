#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
//STL六大部件
//容器 分配器 算法 迭代器 适配器 仿函数 
//算法：模板函数 例如 push find sort pop
//容器百万级别
int main()
{
	int ia[6] = { 27,210,12,47,109,83 };
	vector<int, allocator<int>> vi(ia, ia + 6);
	cout << count_if(vi.begin(), vi.end(), not1(bind2nd(less<int>(), 40)));
	return 0;
}
