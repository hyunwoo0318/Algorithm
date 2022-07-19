//#include<iostream>
//#include<string>
//#include<set>
//
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, m;
//	int ans = 0;
//	set<string> se;
//	set<string> res;
//	cin >> n >> m;
//
//	string s;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> s;
//		se.insert(s);
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> s;
//		if (se.end() != se.find(s))
//		{
//			ans++;
//			res.insert(s);
//		}
//	}
//	cout << ans << "\n";
//	for (set<string>::iterator itr = res.begin(); itr != res.end(); itr++ )
//	{
//		cout << *itr << "\n";
//	}
//}