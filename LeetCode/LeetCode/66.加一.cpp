#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
vector<int> plusOne(vector<int>& digits) {
	int len = digits.size();

	++digits[len - 1];		// ֱ�Ӽ�һ�������ٿ����Ƿ��λ

	
	for (int i = len-1; i >0; --i) {	// i>0
		if (digits[i] == 10) {
			digits[i] = 0;
			++digits[i-1];				// ֱ�Ӷ�ǰһλ����һ�� ��Ϊi>0,��˲���Խ��
		}
		else
		{
			break;						// ˵��û����Ҫ��λ���ˣ�����ѭ��
		}
	}
	if (digits[0] == 10) {				// ���� digits[0]
		digits[0] = 0;
		digits.insert(digits.begin(), 1);
	}

	return digits;


	/*
		int n=digits.size();
        for(int i=n-1;i>=0;--i){	// i>=0
            if(digits[i]==9){		// ��Ҫ��λ������ѭ��
                digits[i]=0;
            }
            else{					// ���޽�λ������ѭ��
                digits[i]+=1;
                break;
            }
        }

		// ������Ҫ�����µ�Ԫ�أ�����ζ��ԭ����Ϊ 99...9����ʽ��
		// �����λ��1��ĩβ���Ԫ��0.�м䲿����������ѭ����0
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