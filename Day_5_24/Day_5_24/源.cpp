#define _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
	string sortSentence(string s) {
		vector<string> arr(9);
		string str;
		int count = 0;
		for (auto x : s){
			if (x >= '0' && x <= '9'){
				arr[] = str;
				str.clear();
				++count;
			}
			else if (x != ' '){
				str.push_back(x);
			}
		}
	}
};