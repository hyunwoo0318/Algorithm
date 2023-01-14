//#include<iostream>
//#include<algorithm>
//
//#define PIV (1<<20)
//using namespace std;
//
//long long tree[2 * PIV];
//
//void init()
//{
//	for (int i = PIV-1; i >= 0; i--)
//	{
//		tree[i] = tree[2 * i + 1] + tree[2 * i];
//	}
//}
//
////a지점을 x로 바꾸는 함수
//void update(long long a, long long x)
//{
//	a = a + PIV -1;
//	tree[a] = x;
//	while (a != 1)
//	{
//		a /= 2;
//		tree[a] = tree[2 * a] + tree[2 * a + 1];
//	}
//}
//
////a~b구간합
//long long query(long long a, long long b)
//{
//	long long ret = 0ll;
//	int l = a + PIV-1;
//	int r = b + PIV-1;
//	while (l <= r)
//	{
//		if (l % 2 == 1)
//		{
//			ret += tree[l];
//			l++;
//		}
//		if (r % 2 == 0)
//		{
//			ret += tree[r];
//			r--;
//		}
//		l /= 2; r /= 2;
//	}
//	return ret;
//
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, m, k;
//	cin >> n >> m >> k;
//	for (int i = 0; i < n; i++)
//	{
//		long long input; cin >> input;
//		tree[i + PIV] = input;
//	}
//	init();
//
//	for (int i = 0; i < m + k; i++)
//	{
//		long long a, b, c;
//		cin >> a >> b >> c;
//		if (a == 1)
//			update(b, c);
//		else if (a == 2)
//			cout << query(b, c) << "\n";
//	}
//}