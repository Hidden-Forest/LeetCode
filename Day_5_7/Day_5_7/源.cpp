#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>

using namespace std;
class Solution {
public:
	vector<int> masterMind(string solution, string guess) {
		int ans1 = 0, ans2 = 0;
		unordered_map<char, int> map;
		for (int i = 0; i < solution.size(); i++)
			map[solution[i]] ++; //��solution����������map
		for (int i = 0; i < solution.size(); i++) {
			if (solution[i] == guess[i]) ans1++; //���д���
			if (map[guess[i]]) map[guess[i]] --, ans2++; //α���д��� + ���д���
		}
		return{ ans1, ans2 - ans1 };
	}
};



int main(){
	
}