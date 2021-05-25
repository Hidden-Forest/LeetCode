#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<map>

using namespace std;
//class Solution {
//public:
//	vector<int> maxInWindows(const vector<int>& num, unsigned int size) {
//		vector<int> ans;
//		int i = 0, max;
//		for (int j = size; j < num.size(); ++j){
//			max = 0;
//			for (int k = i; k < j; ++k){
//				if (num[k] >= max)
//					max = num[k];
//			}
//			ans.push_back(max);
//			i++;
//		}
//	}
//};

class Solution {
private:
	unordered_map<char, int> roman_number = {
		{ 'I', 1 },
		{ 'V', 5 },
		{ 'X', 10 },
		{ 'L', 50 },
		{ 'C', 100 },
		{ 'D', 500 },
		{ 'M', 1000 },
	};
public:
	int romanToInt(string s) {
		int ans = 0;
		for (int i = 0; i < s.size(); ++i){
			int num = roman_number[s[i]];
			if (i < (s.size() - 1) && num < roman_number[s[i + 1]])
				ans -= num;
			else
				ans += num;
		}
		return ans;
	}
};