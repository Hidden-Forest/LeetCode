#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
using namespace std;
long long Fib(int n){
	long long a = 1, b = 2, c = 0;
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	for (int i = 3; i <= n; ++i){
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
//int Fib(int n) {
//	return (int)((pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n)) / sqrt(5));
//}
int main(){
	int n;
	string ss;
	vector<string> str;
	while (cin >> n){
		for (int i = 0; i < n; ++i){
			cin >> ss;
		}
		for (int i = 0; i < n; ++i){
			for (int j = 0; i < str[i].size(); ++j){
				if (str[i][j] == ' ' || str[i][j] == ','){

				}
			}
		}
	}
}