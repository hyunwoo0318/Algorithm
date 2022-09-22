//#include<iostream>
//#include<vector>
//#include<map>
//#include<algorithm>
//
//using namespace std;
//
//vector<pair<int,int> > vec[10001];
//int arr[10001];
//
//int findRoot(int x)
//{
//	int temp = arr[x];
//	int ret = x;
//	while (temp != -1)
//	{
//		ret = temp;
//		temp = arr[temp];
//	}
//	return ret;
//}
//
//bool check(pair<int,int> p)
//{
//	int a = p.first;
//	int b = p.second;
//	if (findRoot(a) == findRoot(b))
//		return false;
//	else
//		return true;
//}
//
//void pushMST(pair<int, int> p)
//{
//	//mst에 넣어서 root변경해줘야함.
//	int root = findRoot(p.second);
//	arr[root] = p.first;
//}
//
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int v, e;
//	int ans = 0;
//	cin >> v >> e;
//
//	fill_n(arr,10001, -1);
//
//	multimap<int, pair<int, int> >m;
//
//	for (int i = 0; i < e; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		m.insert(pair<int, pair<int, int> >(c, { a,b }));
//	}
//
//	int cnt = 0;
//	multimap<int, pair<int, int> > ::iterator iter;
//	for (iter = m.begin(); iter != m.end(); iter++)
//	{
//		if (check(iter->second))
//		{
//			ans += iter->first;
//			cnt++;
//			pushMST(iter->second);
//		}
//		if (cnt == v - 1)
//			break;
//	}
//	cout << ans;
//
//
//}