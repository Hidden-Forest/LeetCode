#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>


using namespace std;
class Solution {
public:
	string evaluate(string s, vector<vector<string>>& knowledge) {
		string str;
		string count;
		int flag = 0;
		for (size_t i = 0; i < s.size(); ++i){
			if (s[i] == '('){
				while (1){
					++i;
					if (s[i] == ')'){
						++i;
						for (size_t j = 0; j < knowledge.size(); ++j){
							if (knowledge[j][0] == count){
								str += knowledge[j][1];
								flag = 1;
							}
						}
						if (flag == 0){
							str.push_back('?');
							flag = 1;
						}
						count.clear();
						break;
					}
					count.push_back(s[i]);
				}
			}
			if (i >= s.size())
				break;
			str.push_back(s[i]);
		}
		return str;
	}
};

int main(){

	string str;
	str += "abcde";
	str.clear();
}