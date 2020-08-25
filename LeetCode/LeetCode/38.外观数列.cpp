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
		* pre.size()-1��Ϊ�˱��� pre[i+1]Խ�硣
		* c++�﷨����Ҫ���ַ����� \0 ��β�����Ǵ󲿷ֱ��������Զ����\0
		* Ϊ�˹�ܱ��������أ� ��������\0
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
