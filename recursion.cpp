#include<iostream>

using namespace std;

int sum(int n) {
	if (n==1) {
		return 1;
	}
	else {
		return n + sum(n-1);
	}
}

int main() {
	int result = sum(4);
	cout << result <<"\n";

	return 0;
}