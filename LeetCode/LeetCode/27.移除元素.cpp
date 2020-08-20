#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int strStr(string haystack, string needle) {
/*
	内置库函数
*/
		if (needle.empty())				// 空needle
			return 0;

		string::size_type pos = haystack.find(needle);

		if (pos == string::npos)		// 不存在
			return -1;
		else {							// 存在，返回index
			int res = (int)pos;
			return res;
		}



	}


};
/*
	滑动窗口法
*/
/*
int lenH = (int)haystack.length();
int lenN = (int)needle.length();

// needle为空字符串
if (lenN == 0)	return 0;

// needle 非空

int rt = 0, i;
for (int lf = 0; lf + lenN - 1 < lenH; lf++) {		// lf+lenN-1<lenH  ==> 减少运算量
	if (haystack[lf] == needle[0]) {			// 首字符匹配

		// 匹配needle剩余字符
		for (i = 1, rt = lf; i < lenN; i++) {
			rt++;

			if (rt >= lenH)		break;	// rt越界，break

			if (haystack[rt] != needle[i])		break;	// 不匹配，break；
		}

		// 判断匹配结果
		if (i == lenN)		return lf;	// 正确,返回结果

	}

}
// 循环结束,意味着无匹配项
return -1;
*/
int main() {

}