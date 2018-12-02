#include <iostream>
#include <vector>
using namespace std;

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void print_v(vector<int> &v, int size) {
	for (int i = 0; i < size; i++) {
		cout << v[i];
	}
	cout << endl;
}

void permutation_2(vector<int> &v, int r, int depth) {
	if (depth == r) {
		return print_v(v,depth);
	}
	for (int i = depth; i < v.size(); i++) {
		swap(&v[depth], &v[i]);
		permutation_2(v, r, depth + 1);
		swap(&v[depth], &v[i]);
	}
}

int main() {
	int a;
	vector<int> v;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int b;
		cin >> b;
		v.push_back(b);
	}
	cout << "how many?" << endl;
	int many;
	cin >> many;

	permutation_2(v, many, 0);
}