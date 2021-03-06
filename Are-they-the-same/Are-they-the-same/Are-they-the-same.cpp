// Are-they-the-same.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
class Same {
public:static bool comp(vector<int>, vector<int>);
};

//bool Same::comp(vector<int> a, vector<int> b) {
//	if (a.empty() || b.empty() || a.size() <= 0 || b.size() <= 0 || a.size() != b.size()) {
//		return false;
//	}
//	for (int i = 0; i < a.size(); i++) {
//		if (std::count(b.begin(), b.end(), a[i] * a[i]) == std::count(a.begin(), a.end(), a[i])) {
//			continue;
//		}
//		return false;
//	}
//	return true;
//}

bool Same::comp(vector<int> a, vector<int> b) {
	for (auto &v : a) {
		v = v * v;
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	return a == b;
}

int main()
{
	static const int arr1[] = { 2,2,3 };
	vector<int> a1(arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]));
	static const int arr2[] = { 4,9,9 };
	vector<int> b2(arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]));
	cout << Same::comp(a1, b2) << endl;
	system("pause");
    return 0;
}

