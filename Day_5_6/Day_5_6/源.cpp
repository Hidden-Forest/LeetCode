#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
	bool isAlienSorted(vector<string>& words, string order) {
		vector<vector<int>> arr;
		arr.resize(words.size());
		for (int i = 0; i < words.size(); ++i){
			for (int j = 0; j < words[i].size(); ++j){
				arr[i][j] = *find(order.begin(),order.end(),words[i][j]);
			}
		}
		for (int i = 0; i < arr.size(); ++i){
			for (int j = 0; j < (arr[i].size()-1); ++j){
				if (arr[j] > arr[j + 1])
					return false;
			}
		}
		return true;
	}
};