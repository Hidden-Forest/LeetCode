#define _CRT_SECURE_NO_WARNINGS 1
#include<algorithm>
#include<iostream>
#include<vector>

class Solution {
public:
	bool isMonotonic(std::vector<int>& A) {
		return std::is_sorted(A.begin(), A.end()) || std::is_sorted(A.rbegin(), A.rend());
	}
};