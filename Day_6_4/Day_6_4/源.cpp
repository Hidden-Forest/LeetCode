#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

bool isPrime(int num)
{
	if (num == 2 || num == 3)
		return 1;
	if (num % 6 != 1 && num % 6 != 5)
		return 0;
	int tmp = sqrt(num);
	for (int i = 5; i <= tmp; i += 6)
	if (num %i == 0 || num % (i + 2) == 0)
		return 0;
	return 1;
}

int main(){
	int n;
	cin >> n;
	vector<int> arr;
	unordered_map<int, int, int> map;
	for (int i = n; i >= 0; --i){
		if (isPrime(i))
			arr.push_back(i);
	}
	for (int i = 0; i < arr.size(); ++i){
		if (isPrime(n - arr[i])){
			
		}
	}
}