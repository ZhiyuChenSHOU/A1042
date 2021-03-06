// ConsoleApplication14.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

const int N = 54;
char mp[5] = { 'S','H','C','D','J' };
int start[N + 1], fin[N + 1],change[N + 1];

int main()
{
	int k;
	cin >> k;
	for (int i = 1; i <= N  ; i++) {
		start[i] = i;
	}
	for (int i = 1; i <= N ; i++) {
		cin >> change[i];
	}
	for (int step = 1; step <= k; step++) {
		for (int i = 1; i <= N; i++) {
			fin[change[i]] = start[i];
		}
		for (int i = 1; i <= N; i++) {
			start[i] = fin[i];
		}
	}
	for (int i = 1; i <= N; i++) {
		cout << mp[(start[i] - 1) / 13] << (start[i] - 1) % 13 + 1 << " ";
	}
	cout << "\b";
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
