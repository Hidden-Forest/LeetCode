#define _CRT_SECURE_NO_WARNINGS 1
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
class Bonus {
public:
	int getMost(vector<vector<int> > board) {
		// write code here
		int max = 0;
		for (int i = 0; i < 6; ++i){
			sort(board[i].begin(), board[i].end());
		}
		for (int i = 0; i < 6; ++i){
			if (board[i][5] >= max)
				max = board[i][5];
		}
		return max;
	}
};