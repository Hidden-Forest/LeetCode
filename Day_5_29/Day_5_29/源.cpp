#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

class Employee {
	public:
	int id;
	int importance;
	vector<int> subordinates;
};


class Solution {
public:
	int getImportance(vector<Employee*> employees, int id) {
		int ans = 0;
		Employee* staff;
		for (int i = 0; i < employees.size(); ++i){
			if (employees[i]->id == id){
				staff->id = employees[i]->id;
				staff->importance = employees[i]->importance;
				staff->subordinates = employees[i]->subordinates;
			}	
		}
		for (int i = 0; i < staff->subordinates.size(); ++i){
			for (int j = 0; j < employees.size(); ++j){
				if (employees[j]->id == staff->subordinates[i])
					ans += employees[j]->importance;
			}
		}
		return ans;
	}
};


const int Max = 21;
int m, n;
vector<int> pre(Max);

void init(int count){
	for (int i = 1; i <= count; ++i)
		pre[i] = i;
}

int find_pre(int key)		   //寻找根节点函数
{
	if (pre[key] == key) return key;
	return pre[key] = find_pre(pre[key]);
}

void unit(int x, int y){
	int rootx = find_pre(x);
	int rooty = find_pre(y);
	if (rootx != rooty)
		pre[rootx] = rooty;
}

int main(){
	int ans[1000] = { 0 };	//数组大小(m*n+1)
	int x, y, line, sum = 0;
	cin >> m >> n >> line;
	init(m*n);
	for (int i = 0; i < line; ++i){
		cin >> x >> y;
		unit(x, y);
	}
	for (int i = 1; i < pre.size(); ++i){
		ans[find_pre(pre[i])] = 1;
	}
	for (auto i : ans){
		sum += i;
	}
	cout << sum << endl;
}