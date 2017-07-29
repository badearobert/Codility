#include <vector>

using namespace std;

vector<int> solution(int N, vector<int> &A) 
{
	vector<int> result(N);
	int maxCounter = 0;
	int NMax = N + 1;

	for (int i = 0; i < A.size(); ++i) 
	{
		int item = A[i];
		if (item == NMax) 
		{
			for (int j = 0; j < N; j++)
			{
				result[j] = maxCounter;
			}
		}
		else 
		{
			int vID = item - 1;
			int updated = result[vID] + 1;
			if (updated > maxCounter)
			{
				maxCounter = updated;
			}
			result[vID]++;
		}

	}

	return result;
}
