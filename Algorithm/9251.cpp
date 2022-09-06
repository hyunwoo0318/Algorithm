//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//char arr[1001][2];
//int ans[1001][1001] = {};
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	string s1, s2;
//	cin >> s1 >> s2;
//		
//	if (s1.size() > s2.size())
//		s1.swap(s2);
//
//	for (int i = 0; i < s1.size(); i++)
//	{
//		arr[i+1][0] = s1[i];
//	}
//
//	for (int i = 0; i < s2.size(); i++)
//	{
//		arr[i+1][1] = s2[i];
//	}
//		
//	for (int i = 1; i <= s1.size(); i++)
//	{
//		for (int j = 1; j <= s2.size(); j++)
//		{
//			if (arr[i][0] == arr[j][1])
//				ans[i][j] = ans[i - 1][j - 1] + 1;
//			else
//				ans[i][j] = max(ans[i][j - 1], ans[i-1][j]);
//		}
//	}
//	cout << ans[s1.size()][s2.size()];
//}