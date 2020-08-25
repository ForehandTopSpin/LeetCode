#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int lf, rt, mid;
		int len = nums.size();

		for (lf = 0, rt = len - 1; lf <= rt;) {
			mid = (lf + rt) / 2;

			if (nums[mid] == target) {
				return mid;
			}
			else if (nums[mid] < target) {
				lf = mid + 1;		// lf新值
			}
			else
			{
				rt = mid - 1;		// rt新值
			}
		}
		return lf;
	
	}
};