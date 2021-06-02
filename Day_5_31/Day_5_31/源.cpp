#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>

using namespace std;

int Fib(int i){
	if (i == 0)
		return 0;
	else if (i < 2)
		return 1;
	return Fib(i - 1) + Fib(i - 2);
}

//int main(){
//	int num, f0, f1, i = 1;
//	f0 = Fib(i - 1);
//	f1 = Fib(1);
//	cin >> num;
//	if (f0 == num || f1 == num){
//		cout << 0 << endl;
//		return 0;
//	}
//	while (f1 < num){
//		f0 = Fib(i - 1);
//		f1 = Fib(i);
//		i++;
//		if (f0 == num || f1 == num){
//			cout << 0 << endl;
//			return 0;
//		}
//			
//	}
//	if ((f1 - num)>(num - f0))
//		cout << num - f0 << endl;
//	else
//		cout << f1 - num << endl;
//	return 0;
//}


class Parenthesis {
public:
	static bool chkParenthesis(string A, int n) {
		stack<char> stk;
		// write code here
		for (char x : A){
			if (x != '(' && x != ')')
				return false;
			else if (x == '(')
				stk.push(x);
			else {
				if (stk.empty())
					return false;
				stk.pop();
			}
		}
		if (stk.empty())
			return false;
		return true;
	}
};

int main(){
	vector<string> str1;
	vector<string> str2;
	string str;
	int n, length = 0, flag1 = 0, flag2 = 0;
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> str;
		if (str.size() < length){
			flag1 = 1;
			break;
		}
		length = str.size();
		str1.push_back(str);
		str2.push_back(str);
	}
	sort(str1.begin(), str1.end());
	for (int i = 0; i < n; ++i){
		if (str1[i] != str2[i])
			flag2 = 1;
	}
	if (flag1 == 1 && flag2 == 1){
		cout << "none" << endl;
		return 0;
	}
	if (flag1 == 1 && flag2 == 0){
		cout << "lexicographically" << endl;
		return 0;
	}
	if (flag1 == 0 && flag2 == 1){
		cout << "length" << endl;
		return 0;
	}
	if (flag1 == 0 && flag2 == 0){
		cout << "both" << endl;
		return 0;
	}
}