//#include<iostream>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//string s;
//string ans;
//int l, c;
//
//bool findVowel()
//{
//	int cnt = 0;
//	bool res = false;
//	for (int i = 0; i < ans.size(); i++)
//	{
//		if (ans[i] == 'a' || ans[i] == 'e' || ans[i] == 'i' || ans[i] == 'o' || ans[i] == 'u')
//			res = true;
//		else
//			cnt++;
//	}
//	if (cnt < 2)
//		res = false;
//	return res;
//}
//
//void back(int n, int pos)
//{
//	if (n == l)
//	{
//		if (findVowel())
//		{
//			for (int i = 0; i < l; i++)
//			{
//				cout << ans[i];
//			}
//			cout << "\n";
//		}
//		
//	}
//	else
//	{
//		for (int i = pos; i < c; i++)
//		{
//			char temp = s[i];
//			ans.push_back(temp);
//			back(n + 1, i + 1);
//			ans.pop_back();
//		}
//	}
//}
//
//int main()
//{	
//	cin >> l >> c;
//	for (int i = 0; i < c; i++)
//	{
//		char a;
//		cin >> a;
//		s.push_back(a);
//	}
//	sort(s.begin(), s.end());
//	back(0,0);
//}