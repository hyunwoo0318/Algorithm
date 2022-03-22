#include<iostream>


using namespace std;
 
int main()
{
	int N;
	cin >> N;

	int a, b,c;
	
	a = N / 5;
	b = N % 5;

	while (1)
	{
		if (b % 3 == 0)
		{
			c = b / 3;
			break;
		}
		else if (a == 0 && (b % 3 != 0))
		{
			cout << -1 << endl;
			return 0;
		}
		else
		{
			a -= 1;
			b += 5;
		}

		
	}
	cout << a + c << endl;
}