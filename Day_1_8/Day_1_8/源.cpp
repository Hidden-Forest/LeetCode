#define _CRT_SECURE_NO_WARNINGS 1
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
	static void rotate(vector<int>& nums, int k) {
		int length = nums.size();
		reverse(nums.begin(), nums.begin() + (length - k));
		reverse(nums.begin() + (length - k), nums.end());
		reverse(nums.begin(), nums.end());
	}
};

void main(){
	vector<int> arr{ 1, 2, 3, 4, 5, 6, 7 };
	Solution::rotate(arr, 3);
	
}
