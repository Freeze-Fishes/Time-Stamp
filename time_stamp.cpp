#include <iostream>
using namespace std;

/*将大写字母转换成小写字母*/
int mytolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return c + 'a' - 'A';
	}
	else
	{
		return c;
	}
}

//将十六进制的字符串转换成整数
int htoi(char s[])
{
	int i;
	int n = 0;
	if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
	{
		i = 2;
	}
	else
	{
		i = 0;
	}
	for (; (s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'); ++i)
	{
		if (mytolower(s[i]) > '9')
		{
			n = 16 * n + (10 + mytolower(s[i]) - 'a');
		}
		else
		{
			n = 16 * n + (mytolower(s[i]) - '0');
		}
	}
	return n;
}


int main()
{
  char time[10];
  cout << "enter your hex time stamp\n";
  cin >> time;
  long Time = htoi(time);
  cout << Time << endl;
  return 0;
}
