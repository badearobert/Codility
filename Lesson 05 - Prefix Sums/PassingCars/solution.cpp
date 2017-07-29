#include <vector>
using namespace std;
int solution(vector<int> &A) 
{
	int sum = 0;
	int limitMax = 1000000000;

	int oneCounters = 0;
	for (int i = A.size() - 1; i >= 0; i--) 
	{
		int item = A[i];
		if (A[i] == 1) 
		{ 
			oneCounters++; 
		}
		else 
		{
			sum += oneCounters;

			if (sum > limitMax)
			{
				return -1;
			}
		}
	}

	return sum;
}