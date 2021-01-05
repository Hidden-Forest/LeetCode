#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	static vector<vector<int>> largeGroupPositions(string s) {
		vector<vector<int>>res;
		for (int i = 0; i < s.size();){
			int j = i + 1;
			while (j < s.size() && s[j] == s[i])j++;
			if (j - i >= 3)res.push_back({ i, j - 1 });
			i = j;
		}
		return res;
	}
};
void main(){
	string s = "aaabbbccc";
	vector<vector<int>> array;
	Solution::largeGroupPositions(s);
}