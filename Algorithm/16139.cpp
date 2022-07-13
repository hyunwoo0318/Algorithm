//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//string s;
//
//int findNum(char a, int l, int r)
//{
//	int res = 0;
//	for (int i = l; i <= r; i++)
//	{
//		if (s[i] == a)
//			res++;
//	}
//	return res;
//}
//
//int main()
// {	
//	cin >> s;
//	int q;
//	cin >> q;
//	q--;
//	char a;
//	int b, c;
//	int res = 0;
//	cin >> a >> b >> c;
//	res = findNum(a, b, c);
//	cout << res << "\n";
//
//	while (q--)
//	{
//		int l, r;
//		cin >> a >> l >> r;
//
//		if (l > c || r < b)
//		{
//			res = findNum(a, l, r);
//		}
//		else
//		{
//			if (l < b)
//			{
//				res += findNum(a, l, b);
//			}
//			else if (l > b)
//			{
//				res -= findNum(a, b, l);
//			}
//
//			if (r < c)
//			{
//				res -= findNum(a, r,c);
//			}
//			else if (r > c)
//			{
//				res += findNum(a, c, r);
//			}
//		}
//		cout << res << "\n";
//	}	
//}
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> s;
//	int q;
//	cin >> q;
//
//	while (q--)
//	{
//		char a;
//		int b, c;
//		cin >> a >> b >> c;
//		int res = findNum(a, b, c);
//		cout << res << "\n";
//	}
//}