#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int strStr(string haystack, string needle) {
/*
	���ÿ⺯��
*/
		if (needle.empty())				// ��needle
			return 0;

		string::size_type pos = haystack.find(needle);

		if (pos == string::npos)		// ������
			return -1;
		else {							// ���ڣ�����index
			int res = (int)pos;
			return res;
		}



	}


};
/*
	�������ڷ�
*/
/*
int lenH = (int)haystack.length();
int lenN = (int)needle.length();

// needleΪ���ַ���
if (lenN == 0)	return 0;

// needle �ǿ�

int rt = 0, i;
for (int lf = 0; lf + lenN - 1 < lenH; lf++) {		// lf+lenN-1<lenH  ==> ����������
	if (haystack[lf] == needle[0]) {			// ���ַ�ƥ��

		// ƥ��needleʣ���ַ�
		for (i = 1, rt = lf; i < lenN; i++) {
			rt++;

			if (rt >= lenH)		break;	// rtԽ�磬break

			if (haystack[rt] != needle[i])		break;	// ��ƥ�䣬break��
		}

		// �ж�ƥ����
		if (i == lenN)		return lf;	// ��ȷ,���ؽ��

	}

}
// ѭ������,��ζ����ƥ����
return -1;
*/
int main() {

}