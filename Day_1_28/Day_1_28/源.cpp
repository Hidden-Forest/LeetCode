#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<algorithm>
class Solution {
public:
	int pivotIndex(std::vector<int> &nums) {
		int total = accumulate(nums.begin(), nums.end(), 0);
		int sum = 0;
		for (int i = 0; i < nums.size(); ++i) {
			if (2 * sum + nums[i] == total) {
				return i;
			}
			sum += nums[i];
		}
		return -1;
	}
};

