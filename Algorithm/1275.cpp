//#include<iostream>
//#include<algorithm>
//
//#define PIV (1 << 20)
//using namespace std;
//
//long long tree[2 * PIV];
//
//void init()
//{
//	for (int i = PIV - 1; i >= 1; i--)
//	{
//		tree[i] = tree[i * 2 + 1] + tree[i * 2];
//	}
//}
//
//void update(int a, long long x)
//{
//	a += (PIV - 1);
//	tree[a] = x;
//	while (a != 1)
//	{
//		a /= 2;
//		tree[a] = tree[a * 2 + 1] + tree[a * 2];
//	}
//}
//
//long long query(int a, int b)
//{
//	long long ret = 0ll;
//	int l = PIV + a - 1;
//	int r = PIV + b - 1;
//	while (l <= r)
//	{
//		if (l % 2 == 1)
//			ret += tree[l++];
//		if (r % 2 == 0)
//			ret += tree[r--];
//		l /= 2; r /= 2;
//	}
//	return ret;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, q;
//	cin >> n >> q;
//	
//	for (int i = 0; i < n; i++)
//	{
//		long long a; cin >> a; tree[PIV + i] = a;
//	}
//	init();
//
//	for (int i = 0; i < q; i++)
//	{
//		int a, b, c;
//		long long d;
//		cin >> a >> b >> c >> d;
//		if (a <= b)
//			cout << query(a, b) << "\n";
//		else
//			cout << query(b, a) << "\n";
//		update(c, d);
//	}
//}