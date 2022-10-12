#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	unsigned long long num;
	cin >> num;
	cout << ((num & 0x0000ffff) << 16 | (num & 0xffff0000) >> 16) << endl;
	return 0;
}