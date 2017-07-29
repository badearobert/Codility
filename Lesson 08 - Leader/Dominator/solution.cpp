#include <vector>
#include <algorithm>

using namespace std;


int solution(vector<int> &A) 
{
	sort(A.begin(), A.end());
	int needed = A.size() / 2 + 1;

	if (A.size() == 0) return -1;
	int current = A[0];
	int currentValues = 1;

	for (int i = 0; i < A.size(); ++i) 
	{

		if (A[i] != current) 
		{
			current = A[i];
			currentValues = 1;
		}
		else 
		{
			currentValues++;
			if (currentValues >= needed) 
			{
				return i;
			}
		}
	}
	return -1;
}