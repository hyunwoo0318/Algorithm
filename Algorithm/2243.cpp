//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//#define PIV (1 << 4)
//using namespace std;
//
//int tree[PIV * 2];
//
//void update(int a, int b)
//{
//	a += (PIV - 1);
//	tree[a] += b;
//	while (a != 1)
//	{
//		a /= 2;
//		tree[a] = tree[2 * a] + tree[2 * a + 1];
//	}
//}
//
////x번째 원소를 찾기
//int cquery(int x)
//{
//	int idx = 1;
//	while (idx < PIV)
//	{
//		if (tree[idx * 2] < x)
//		{
//			x -= tree[2 * idx];
//			idx = idx * 2 + 1;
//		}
//		else
//			idx = idx * 2;
//	}
//	return (idx - PIV + 1);
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n; cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int a; cin >> a;
//		if (a == 1)
//		{
//			int b; cin >> b;
//			int ret = cquery(b);
//			cout << ret << "\n";
//			update(ret, -1);
//		}
//		else
//		{
//			int b, c; cin >> b >> c;
//			update(b, c);
//		}
//	}
//}