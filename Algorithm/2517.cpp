//#include<iostream>
//#include<map>
//#include<algorithm>
//#include<vector>
//
//#define PIV (1 << 20)
//using namespace std;
//
//int tree[PIV * 2];
//
//void update(int a, int x)
//{
//	a += (PIV - 1);
//	tree[a] = x;
//	while (a != 1)
//	{
//		a /= 2;
//		tree[a] = tree[2 * a] + tree[2 * a + 1];
//	}
//}
//
//int query(int a, int b)
//{
//	int ret = 0;
//	int l = a + PIV - 1;
//	int r = b + PIV - 1;
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
//	vector<int> v;
//	vector<int> v2;
//	map<int, int> m;
//	int n; cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int a; cin >> a;
//		v.push_back(a);
//		v2.push_back(a);
//	}
//	
//	sort(v.begin(), v.end());
//	for (int i = 0; i < n; i++)
//	{
//		m[v[i]] = i;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		update(m[v2[i]], 1);
//		cout << query(m[v2[i]],n) << "\n";
//	}
//}