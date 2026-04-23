#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int main() {
	string h;
	getline(cin, h);

	sort(h.begin(), h.end());

	cout << h;

}