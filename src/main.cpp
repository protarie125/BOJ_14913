#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, d, k;
	cin >> a >> d >> k;

	const auto& e = k - a;

	if (0 != e % d) {
		cout << "X";
		return 0;
	}

	const auto& n = e / d + 1;
	if (n <= 0) {
		cout << "X";
		return 0;
	}

	cout << n;

	return 0;
}