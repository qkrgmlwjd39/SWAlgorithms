#include <iostream>
#include <vector>
using namespace std;

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void print_arr(vector<int> &arr) {				//how to use auto
	for (int i = 0; i < arr.size(); i++) {
		printf("%d", arr[i]);
	}
	cout << endl;

}

void permutation(vector<int> &arr,int n) {
	if (n == arr.size() - 1) {
		return print_arr(arr);
	}
	for (int i = n; i < arr.size(); i++) {
		swap(&arr[n], &arr[i]);
		permutation(arr, n + 1);
		swap(&arr[n], &arr[i]);
	}
}

int main() {
	int n;
	vector<int> arr;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		arr.push_back(k);
	}
	permutation(arr, 0);
	return 0;

}
