#include<iostream>
#include<stack>
using namespace std;
void test01()
{
	stack<int>s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	cout << "size " << s.size() << endl;
	while (!s.empty())
	{
		cout << s.top() << endl;
		s.pop();
	}
	cout << "size " << s.size() << endl;
}
int main()
{
	test01();
	return 0;
}