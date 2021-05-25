#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>

using namespace std;
class Solution {
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target) {
		int i;
		for (i = 0; i < matrix[i].size(); ++i){
			if (matrix[0][i] == target)
				return true;
		}
		if (matrix.size()>1){
			for (i = 1; i < matrix.size(); ++i){
				if (matrix[i][matrix[i].size() - 1]>target && matrix[i - 1][matrix[i].size() - 1] < target)
					break;
			}
			for (int j = 0; j < matrix[i].size(); ++j){
				if (matrix[i][j] == target)
					return true;
			}
		}
		return false;
	}
};

int main(){

	for (int i = 1; i < 10; ++i)
		cout << i << endl;
}