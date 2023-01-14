//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//#include<list>
//
//#define MAX 300001
//using namespace std;
//
//struct st { int weight; long long value; };
//
//bool b[MAX] = { false };
//long long ans = 0ll;
//int bagCnt = 0;
//
//
//struct cmp
//{
//	bool operator()(st st1, st st2)
//	{
//		return st1.weight < st2.weight;
//	}
//};
//
//priority_queue<long long, vector<long long>, less<long long>> pq;
//vector<st> jw;
//vector<long long> bag;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, k;
//	cin >> n >> k;
//
//	for (int i = 0; i < n; i++)
//	{
//		int w;
//		long long v;
//		cin >> w >> v;
//		jw.push_back({ w,v });
//	}
//
//	for (int i = 0; i < k; i++)
//	{
//		long long w;
//		cin >> w;
//		bag.push_back(w);
//	}
//
//	sort(jw.begin(), jw.end(), cmp());
//	sort(bag.begin(), bag.end());
//
//	int idx = 0;
//	for (int i = 0; i < k; i++)
//	{
//		for (; idx < n; idx++)
//		{
//			if (jw[idx].weight <= bag[i])
//				pq.push(jw[idx].value);
//			else
//				break;
//		}
//		if (!pq.empty())
//		{
//			ans += pq.top();
//			pq.pop();
//		}
//	}
//	cout << ans;
//
//}
