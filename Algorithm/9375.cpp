//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//
//using namespace std;
//
//int res = 0;
//vector<int> arr;
//
//void find(vector<pair<string, int> > v, int cnt,int n)
//{
//	
//	if (cnt == n)
//	{
//		int temp = 1;
//		for (int i = 0; i < n; i++)
//		{
//			temp *= arr[i];
//			res += temp;
//		}
//	}
//	else
//	{
//		for (int i = 0; i < n; i++)
//		{
//			arr[i] = v[i].second;
//			find(v, cnt + 1, n);
//		}
//	}
//}
//
//bool comp(pair<string, int>a, pair<string, int> b)
//{
//	return a.first == b.first;
//}
//
//int main()
//{
//	int N;
//	
//	vector<pair<string,int>> v;
//	cin >> N;
//	while (N--)
//	{
//		int n;
//		res = 0;
//		cin >> n;
//		for (int i = 0; i < n; i++)
//		{
//			string a, b;
//			cin >> a >> b;
//			auto it = find(v.begin(), v.end(), comp);
//			if (it == v.end())
//			{
//				v.push_back(make_pair(b, 1));
//			}
//			else
//			{
//				v[it-v.begin()].second++;
//			}
//		}
//		v.push_back(make_pair("zero", 1));
//
//		find(v,0,v.size()-1);
//		cout << res;
//	}
//}