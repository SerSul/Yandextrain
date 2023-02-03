#include <iostream>
using namespace std;
int n, mn=10000, a[100001], mx=0;  // n=кол-во резервуаров
long long oper;

int main() {
	int n, a[100001];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (i && a[i - 1] > a[i])
		{
			cout << -1;
			return 0;
		}
	}
	cout << a[n - 1] - a[0];
	return 0;
}