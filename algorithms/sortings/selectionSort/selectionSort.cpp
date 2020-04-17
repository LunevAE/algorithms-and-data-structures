#include <vector>

using namespace std;

void selectionSort(vector<int>& v)
{
	int min_idx;

	for (int i = 0; i < v.size() - 1; i++) {
		min_idx = i;
		for (int j = i; j < v.size() - 1; j++) {
			if (v[min_idx] > v[j + 1]) {
				min_idx = j+1;
			}
		}
		swap(v[min_idx], v[i]);
	}
}