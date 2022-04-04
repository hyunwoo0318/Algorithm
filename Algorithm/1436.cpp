//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//
//vector<int> res;
//
//int main()
//{
//	int i = 666;
//	int cnt = 0;
//	vector<int>v;
//	while (cnt != 10000)
//	{
//		string s = to_string(i);
//		v.clear();
//		for (int j = 0; j < s.size()-2; j++)
//		{			
//			if ((s[j] - '0') == 6 && (s[j + 1] - '0') == 6 && (s[j + 2] - '0') == 6)
//			{
//				res.push_back(i);
//				cnt++;
//				break;
//			}
//		}		
//		i++;
//	}
//
//	int n;
//	cin >> n;
//
//	cout << res[n - 1] << endl;
//}