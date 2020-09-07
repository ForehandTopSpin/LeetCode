#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
	string reverseWords(string s) {

		// 算法一
		int lf, rt;
		char t;

		lf = rt = 0;
		for (int i = 0; i < s.length(); i++) {

			if (s[i] == ' ') {

				// 逆转单词
				--rt;
				while (lf < rt) {
					t = s[lf];
					s[lf] = s[rt];
					s[rt] = t;


					++lf;	// 修改 lf rt
					--rt;
				}

				lf = rt = i + 1;		// lf变为下一个单词首字母

			}
			else
			{
				++rt;
			}

		}

		if (rt > 0) {
			// 逆转单词
			--rt;
			while (lf < rt) {
				t = s[lf];
				s[lf] = s[rt];
				s[rt] = t;


				++lf;	// 修改 lf rt
				--rt;
			}
		}
		return s;


		// 算法二
		string ret;
        int length = s.length();
        int i = 0;
        while (i < length) {
            int start = i;
            while (i < length && s[i] != ' ') {
                i++;
            }
            for (int p = start; p < i; p++) {
                ret.push_back(s[start + i - 1 - p]);
            }
            while (i < length && s[i] == ' ') {
                i++;
                ret.push_back(' ');
            }
        }
        return ret;
		
		

		// 算法三
		int length = s.length();
        int i = 0;
        while (i < length) {
            int start = i;
            while (i < length && s[i] != ' ') {
                i++;
            }

            int left = start, right = i - 1;
            while (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
            while (i < length && s[i] == ' ') {
                i++;
            }
        }
        return s;
		
	}
};
int main() {
	 string s = "Let's take LeetCode contest";
	//string s = "I abc def gh";

	Solution t;
	t.reverseWords(s);
	
	cout << s;
	


}