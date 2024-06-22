#include <vector> // Include the vector header
#include <iostream> // Include the iostream header

using namespace std;

vector<int> solve(vector<int>& arr, int k) { // Add a space between '&' and 'arr'
	int n = arr.size();
	vector<int> newarr;

	int cur_window = 0;
	// initializing current window
	for (int i = 0; i < k; i++) cur_window += arr[i];

	// cur_window = a[0] + a[1] ... + a[k-1]

	newarr.push_back(cur_window);

	for (int i = 1; i <= n - k; i++) {
		int curr_element = cur_window + arr[i + k - 1] - arr[i - 1];
		newarr.push_back(curr_element);

		cur_window = curr_element;
	}

	return newarr;
}


int main() {
	int n; cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];

	int k; cin >> k;
	vector<int> newarr = solve(arr, k);
	cout << "newarr: ";
	for (int i : newarr) cout << i << " ";
	cout << endl;
	return 0;

}