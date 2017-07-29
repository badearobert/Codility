#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> &A) 
{
	int result = 0;
	sort(A.begin(), A.end());
	if (A[0] < 0 && A[1] < 0) 
	{ 
		result = A[0] * A[1]; 
	}

	int end = A.size() - 1;

	return max(result * A[end], A[end] * A[end - 1] * A[end - 2]);
}