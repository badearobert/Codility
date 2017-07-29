#include <vector>

using namespace std;

int solution(int X, vector<int> &A) {
	int result = -1;
	if (A.size() < X) return result;

	vector<int> values(X);
	int sum = 0;
	for (int i = 0; i <= X; ++i) sum += i;

	for (int i = 0; i < A.size(); ++i) {
		int item = A[i];
		if (values[item-1] == 0) {
			values[item-1]++;
			sum -= item;

			if (sum == 0) {
				result = i;
				break;
			}
		}
	}

	return result;
}