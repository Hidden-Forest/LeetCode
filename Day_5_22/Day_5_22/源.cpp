#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stack>

using namespace std;
class Solution {
public:
	int clumsy(int N) {
		stack<int> ans;
		ans.push(N--);
		int index = 0;
		while (N > 0){
			if (index % 4 == 0)
				ans.top() *= N;
			else if (index % 4 == 1)
				ans.top() /= N;
			else if (index % 4 == 2)
				ans.push(N);
			else
				ans.push(-N);
			index++;
			N--;
		}
		int sum = 0;
		while (!ans.empty()){
			sum += ans.top();
			ans.pop();
		}
		return sum;
	}
};