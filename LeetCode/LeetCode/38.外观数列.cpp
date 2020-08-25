#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	string countAndSay(int n) {
		
		if (n == 1)
			return "1";

		string pre = countAndSay(n - 1);
		string ans = "";

		/*
		* pre.size()-1是为了避免 pre[i+1]越界。
		* c++语法本身不要求字符串以 \0 结尾，但是大部分编译器会自动添加\0
		* 为了规避编译器因素， 假设它无\0
		*/
		int count=1;
		int i = 0;
		for (; i < (int)pre.size()-1; i++) {	
			if (pre[i] == pre[i+1]) {
				count++;
			}
			else
			{
				ans += to_string(count) + pre[i];
				
				count = 1;
			}
		}
		return ans += to_string(count) + pre[i];

	}
};
