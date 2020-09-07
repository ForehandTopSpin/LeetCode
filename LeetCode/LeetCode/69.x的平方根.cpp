#include <iostream>
#include <math.h>
using namespace std;
class Solution {
public:
	int mySqrt(int x) {

		int lf = 0, rt = x, ans = -1;
	    while (lf <= rt) {
	        int mid = l + (r - l) / 2;
	        if ((long long)mid * mid <= x) {
	            ans = mid;
	            lf = mid + 1;
	        }
	        else {
	            rt = mid - 1;
	        }
	    }
	    return ans;

        /*
		int lf, rt, mid;

		lf = 0;
		rt = x;

		while (lf <= rt) {
			mid = lf  + (rt - lf) / 2;

			if (pow(mid, 2) < x&&pow(mid + 1, 2) > x) {
				return mid;
			}
			if (pow(mid,2) == x) {
				return mid;
			}

			if (pow(mid, 2) < x) {
				lf = mid + 1;
			}
			else {
				rt = mid-1;
			}
		}

	    return lf;
		*/
        
	}
};
