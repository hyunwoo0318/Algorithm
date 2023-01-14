//#include<iostream>
//#include<algorithm>
//
//#define PIV (1 << 7)
//using namespace std;
//
//int tree[PIV * 2];
//
//int query(int a, int b)
//{
//	int l = a + PIV - 1;
//	int r = b + PIV - 1;
//	int ret = 0;
//
//	while (l <= r)
//	{
//		if (l % 2 == 1)
//		{
//			ret = max(ret, tree[l]);
//			l++;
//		}
//		if (r % 2 == 0)
//		{
//			ret = max(ret, tree[r]);
//			r--;
//		}
//		l /= 2; r /= 2;
//	}
//	return ret;
//
//}
//
//void update(int a, int x)
//{
//	a += (PIV - 1);
//	tree[a] = x;
//	while (a != 1)
//	{
//		a /= 2;
//		tree[a] = max(tree[2 * a], tree[2 * a + 1]);		
//	}
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
//		int input; cin >> input;
//		int ret = query(1, input-1);
//		update(input, ret + 1);
//	}
//	cout << query(1, PIV-1);
//}

//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//#define MAX 1000001
//using namespace std;
//
//int arr[MAX];
//vector<int> v;
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n; cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int input; cin >> input;
//		arr[i] = input;
//		if (v.empty() || v.back() < input)
//		{
//			v.push_back(input);
//			continue;
//		}		
//		int idx = lower_bound(v.begin(), v.end(), input) - v.begin();
//		v[idx] = input;
//	}
//	cout << v.size();
//}