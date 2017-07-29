#include <stack>
#include <string>

using namespace std;

const char OpenBrackets[] = { '(', '[', '{' };
const char CloseBrackets[] = { ')', ']', '}' };


bool isOpenBracket(char c)
{
	return (c == OpenBrackets[0] || c == OpenBrackets[1] || c == OpenBrackets[2]);
}
bool isClosedBracket(char c)
{
	return (c == CloseBrackets[0] || c == CloseBrackets[1] || c == CloseBrackets[2]);
}

bool BracketsMatch(char c1, char c2)
{
	for (int i = 0; i <= 2; ++i) {
		if (c1 == OpenBrackets[i] && c2 == CloseBrackets[i])
			return true;
	}
	return false;
}
int solution(string &S) {
	stack<char> st;
	for (int i = 0; i < S.size(); i++)
	{
		char c = S[i];
		if (isOpenBracket(c))
		{
			st.push(c);
		}
		else if (isClosedBracket(c) && false == st.empty())
		{
			const char top = st.top();
			if (BracketsMatch(top, c))
			{
				st.pop();
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	return st.empty();
}