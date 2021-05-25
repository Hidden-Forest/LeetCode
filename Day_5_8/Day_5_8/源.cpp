#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
	string replaceSpace(string s) {
		string ans;
		for (int i = 0; i<s.size; ++i){
			if (s[i] != ' ')
				ans += s[i];
			else{
				ans += "20%";
			}
		}
		return ans;
	}
};