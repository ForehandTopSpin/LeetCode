#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
int lengthOfLastWord(string s) {
	/*
	* �����ַ���s ������ĩβ�пո񣬵���ǰ������ĸ���� "a  "
	* ������������Ļ�����Ҫ����ĩβ�ո�
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