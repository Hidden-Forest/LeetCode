#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
	vector<string> summaryRanges(vector<int>& nums) {
		vector<string> ans;
		if (nums.size() == 0)
			return ans;
		else if (nums.size() == 1){
			ans.push_back(to_string(nums[0]));
			return ans;
		}
		else{
			for (int i = 0; i < nums.size(); ++i){
				if (i == nums.size() - 1 || nums[i] != nums[i + 1] - 1){
					string temp = (nums[0] == nums[i]) ? to_string(nums[0]) :
												to_string(nums[0]) + "->" + to_string(nums[i]);
					ans.push_back(temp);
					nums[0] = (i == nums.size() - 1) ? nums[0] : nums[i + 1];
				}
			}
		}
		return ans;
	}
};