#include <iostream>
using namespace std;

int main() {
	int p1, p2, c1, c2;
	cin >> p1 >> c1 >> p2 >> c2;
	int left = p1 * c1;
	int right = p2 * c2;

	if (left > right)
		cout << -1;
	else if (left == right)
		cout << 0;
	else
		cout << 1;
	cout << endl;

	return 0;
}

