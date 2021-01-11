#define _CRT_SECURE_NO_WARNINGS 1
#include<vector>
#include<queue>
#include<iostream>
class Solution {
public:
	std::vector<int> smallestK(std::vector<int>& arr, int k) {
		std::vector<int> ans;
		std::priority_queue<int> tool;
		for (int i : arr){
			tool.push(i);
			if (tool.size() > k)
				tool.pop();
		}
		while (!tool.empty()){
			ans.push_back(tool.top());
			tool.pop();
		}
		return ans;
	}
};