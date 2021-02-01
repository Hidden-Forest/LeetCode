#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
	vector<int> to_vector(string num){
		vector<int> ans;
		for (int i = 0; i < num.size(); ++i){
			ans.push_back((int)num[i]);
		}
	}
	string addStrings(string str1, string str2) {
		vector<int> num1 = to_vector(str1);
		vector<int> num2 = to_vector(str2);

	}
};
void main(){
	int n;
	
}