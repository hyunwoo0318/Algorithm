//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//
//#define MAX 400001
//using namespace std;
//
//bool arr[MAX];
//
//struct Pos {
//	long long x; long long y;
//};
//
//bool compare(Pos p1, Pos p2)
//{
//	return p1.x < p2.x;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n;
//	cin >> n;
//
//
//	vector<Pos> v;
//	priority_queue<int,vector<int>,greater<int>> pq;
//	for (int i = 0; i < n; i++)
//	{
//		int x, y;
//		cin >> x >> y;
//		v.push_back({ x,y });
//	}
//
//	sort(v.begin(), v.end(),compare);
//
//	pq.push(v[0].y);
//	for (int i = 1; i < n; i++)
//	{
//		pq.push(v[i].y);
//		if (pq.top() <= v[i].x)
//		{
//			pq.pop();
//		}
//	}
//	cout << pq.size();
//}