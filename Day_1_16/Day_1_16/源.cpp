#define _CRT_SECURE_NO_WARNINGS 1	
#include<vector>
#include<iostream>
class Solution {
public:
	bool uniqueOccurrences(std::vector<int>& arr) {
		int count[2002] = { 0 }; // 统计数字出现的频率
		for (int i = 0; i < arr.size(); i++) {
			count[arr[i] + 1000]++;
		}
		bool fre[1002] = { false }; // 看相同频率是否重复出现 
		for (int i = 0; i <= 2000; i++) {
			if (count[i]) {
				if (fre[count[i]] == false) fre[count[i]] = true;
				else return false;
			}
		}
		return true;
	}
};
