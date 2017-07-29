#include <limits>
#include <algorithm>
#include <vector>

int solution(std::vector<int> &A) 
{
	if (A.size() == 0) return 0;
	int minPrice = std::numeric_limits<int>::max();
	int maxProfit = 0;

	for (auto i : A)
	{
		minPrice = std::min(minPrice, i);
		maxProfit = std::max(maxProfit, i - minPrice);
	}
	return maxProfit;
}