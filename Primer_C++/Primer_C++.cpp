#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include<list>
using namespace std;
//Written by CodeTom99
int main()
{
	shared_ptr<string> p1;
	shared_ptr<list<int>> p2;
	if (p1 && p1->empty())
		*p1 = "hi";
	return 0;
}