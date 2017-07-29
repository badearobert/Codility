#include <string>
using namespace std;

int solution(string &S) 
{
	int i = 0;
	for (auto c : S) 
	{
		if (c == '(')
			i++;
		else if (i > 0)
			i--;
		else 
			return 0;
	}
	return i == 0;
}