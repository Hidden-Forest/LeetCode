#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;


class Solution {
public:
	bool checkSubarraySum(vector<int>& nums, int k) {
		int length = nums.size();
		if (length < 2)
			return false;
		int sum = nums[0];
		unordered_map<int, int> map;
		for (int i = 1; i < length; ++i){
			map.insert(pair<int, int>((i - 1), (sum%k)));
			for (auto &v : map){
				if (v.second == (sum%k) && (i - 1) - v.first >= 2)
					return true;
			}
			sum += nums[i];
		}
		map.insert(pair<int, int>((length - 1), (sum%k)));
		for (auto &v : map){
			if (v.second == (sum%k) && (length - 1) - v.first >= 2)
				return true;
		}
		return false;
	}
};
class Board {
public:
	bool checkWon(vector<vector<int> > board) {
		// write code here
		if (board[0][0] == 1 && board[0][1] == 1 && board[0][2] == 1)
			return true;
		if (board[1][0] == 1 && board[1][1] == 1 && board[1][2] == 1)
			return true;
		if (board[2][0] == 1 && board[2][1] == 1 && board[2][2] == 1)
			return true;
		if (board[0][0] == 1 && board[1][0] == 1 && board[2][0] == 1)
			return true;
		if (board[0][1] == 1 && board[1][1] == 1 && board[2][1] == 1)
			return true;
		if (board[0][2] == 1 && board[1][2] == 1 && board[2][2] == 1)
			return true;
		if (board[0][0] == 1 && board[1][1] == 1 && board[2][2] == 1)
			return true;
		if (board[0][2] == 1 && board[1][1] == 1 && board[2][0] == 1)
			return true;
		return false;
	}
};
void func(int x){
	int count = 0;
	while (x){
		count++;
		x &= (x - 1);
	}
	cout << count << endl;
}
int main(){
	func(9999);

}