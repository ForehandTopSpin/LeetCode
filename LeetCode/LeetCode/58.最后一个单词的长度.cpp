#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
int lengthOfLastWord(string s) {
	/*
	* 给定字符串s ，可能末尾有空格，但其前面有字母。如 "a  "
	* 遇到上述情况的话，需要屏蔽末尾空格
	*/
	int count = 0;
	for (int i = s.length()-1; i >=0; --i) {
		if (s[i] == ' ') {
			if (count == 0)   
				continue;

			break;
		}
		else
		{
			++count;
		}
	}
	return count;
}
};

int main() {
	Solution t;
	t.lengthOfLastWord("a");
	return 0;
}