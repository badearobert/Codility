#include <vector>
using namespace std;
int solution(vector<int> &A) 
{
	vector<int> B(A.size());
	for (const auto& i : A)
	{
		B[i - 1]++;
	}

	for (int i = 0; i < B.size(); ++i) 
	{
		if (B[i] != 1) 
		{
			return 0;
		}
	}
	return 1;
}