#include <algorithm>
#include <vector>

using namespace std;
int solution(vector<int> &A) 
{
	int result = 0;
	int current = -1;
	sort(A.begin(), A.end());
	for (const auto&i : A) 
	{
		if (i != current) 
		{
			result++;
			current = i;
		}
	}

	return result;
}