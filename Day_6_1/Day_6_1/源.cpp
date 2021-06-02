#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	int a[4] = { 1, 2, 3, 4 };
	int *ptr = (int*)(&a + 1);
	printf("%d", *(ptr - 1)); 

}