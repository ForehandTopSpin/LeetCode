#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
vector<int> plusOne(vector<int>& digits) {
	int len = digits.size();

	++digits[len - 1];		// 直接加一，后面再考虑是否进位

	
	for (int i = len-1; i >0; --i) {	// i>0
		if (digits[i] == 10) {
			digits[i] = 0;
			++digits[i-1];				// 直接对前一位数加一。 因为i>0,因此不会越界
		}
		else
		{
			break;						// 说明没有需要进位的了，结束循环
		}
	}
	if (digits[0] == 10) {				// 处理 digits[0]
		digits[0] = 0;
		digits.insert(digits.begin(), 1);
	}

	return digits;


	/*
		int n=digits.size();
        for(int i=n-1;i>=0;--i){	// i>=0
            if(digits[i]==9){		// 需要进位，继续循环
                digits[i]=0;
            }
            else{					// 已无进位，结束循环
                digits[i]+=1;
                break;
            }
        }

		// 若是需要增加新的元素，则意味着原数据为 99...9，形式。
		// 因此首位置1，末尾添加元素0.中间部分已在上面循环置0
        if(digits[0]==0){			
            digits[0]=1;
            digits.push_back(0);
        }
        return digits;

	*/
}
};

int main() {
	Solution t;
	vector<int> vec;
	vec.push_back(9);
	vec.push_back(9);
	t.plusOne(vec);
}