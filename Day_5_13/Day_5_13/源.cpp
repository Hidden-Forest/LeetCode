#define _CRT_SECUR E_NO_WARNINGS 1
#include<vector>
#include<string>
#include<iostream>
#include<algorithm>

using namespace std;
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> ans;
		int i = 0, j = nums.size() - 1;
		while (i < j){
			if (nums[i] + nums[j] == target)
				j--;
			else if (nums[i] + nums[j] < target)
				i++;
			else{
				ans.push_back(nums[i]);
				ans.push_back(nums[j]);
				return ans;
			}
		}
		return ans;

	}
};
class Solution {
public:
	string arrangeWords(string text) {
		vector<string> str;
		int begin = 0, end = 0;
		for (int i = 0; i < text.size(); ++i){
			if (text[i] == ' '){
				end = i;
				str.push_back(text.substr(begin,end-begin));
				begin = end + 1;
			}
		}
		str.push_back(text.substr(begin));
		sort(str.begin(), str.end());
		for (int i = 0; i < str.size(); ++i){
			cout << str[i] << " ";
		}
	}
};