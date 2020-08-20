#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		// vector为空
		if (nums.size() == 0) {
			return 0;
		}

		// 非空情况
		int l = 0;
		for (int r = 1; r < nums.size(); r++) {
			if (nums[r] != nums[l]) {
				l++;
				nums[l] = nums[r];
			}
		}
		return l+1;
	}
};

int main() {

}