#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>

using namespace std;
class Solution {
public:
	struct location
	{
		int x;
		int y;
	};
	void setZeroes(vector<vector<int>>& matrix) {
		vector<location> gather; //定义一个坐标集合
		location count;
		for (int i = 0; i < matrix.size(); ++i){
			for (int j = 0; j < matrix[i].size(); ++j){
				if (matrix[i][j] == 0){
					count.x = i;
					count.y = j;
					gather.push_back(count);
				}
			}
		}
		for (int i = 0; i < gather.size(); ++i){
			for (int j = 0; j < matrix.size(); ++j){
				matrix[gather[i].x][j] = 0;
			}
			for (int j = 0; j < matrix.size(); ++j){
				matrix[j][gather[i].y] = 0;
			}
		}
		return;
	}
};