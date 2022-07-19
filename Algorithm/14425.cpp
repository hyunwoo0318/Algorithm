//#include<iostream>
//#include<vector>
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
//	string s;	
//
//	set<string> ss; // 집합에 포함되어 있는 문자열 저장
//	
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++)
//	{		
//		cin >> s;
//		ss.insert(s);
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> s;
//		
//		if (ss.end() != ss.find(s))
//		{
//			ans++;
//		}
//		
//	}
//
//	cout << ans;
//}