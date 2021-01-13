#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	vector<int> findDuplicates(vector<int>& nums) {
		int arr[100000] = { 0 };
		vector<int> ans;
		for (int i = 0; i < nums.size(); ++i){
			arr[nums[i]]++;
		}
		for (int i = 0; i < 100000; ++i){
			if (arr[i] == 2)
				ans.push_back(i);
		}
		return ans;
	}
};