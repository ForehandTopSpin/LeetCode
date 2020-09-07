#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	int maxSubArray(vector<int>& nums) {

	/*
	 * �����֪��nums�ض��ǿ�
	 */
	int ans = nums[0];
	int sum = 0;
	for (int num : nums) {
		if (sum > 0) {
			sum += num;
		}
		else {
			sum = num;
		}
		ans = max(sum, ans);
	}
	return ans;

	/*
	int pre = 0, maxAns = nums[0];
	for (int x : nums) {
		pre = max(pre + x, x);
		maxAns = max(maxAns, pre);
	}
	return maxAns;
	*/

	}
};