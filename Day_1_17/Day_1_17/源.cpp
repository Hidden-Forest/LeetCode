#define _CRT_SECURE_NO_WARNINGS 1
#include<vector>
#include<iostream>
class Solution {
public:
	bool checkStraightLine(std::vector<std::vector<int>>& coor) {
		int n = coor.size();
		for (int i = 1; i + 1 < n; i++) {
			int dx1 = coor[i][0] - coor[i - 1][0], dy1 = coor[i][1] - coor[i - 1][1];
			int dx2 = coor[i + 1][0] - coor[i][0], dy2 = coor[i + 1][1] - coor[i][1];
			if ((long long)dx1 * dy2 != (long long)dy1 * dx2){
				return false;
			}
		}
		return true;
	}
};