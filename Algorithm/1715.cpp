//#include<iostream>
//#include<queue>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//	int N, input;
//	cin >> N;
//	priority_queue<int> pq;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> input;
//		pq.push(-input);
//	}
//
//	if (N == 1)
//	{
//		cout << 0;
//		return 0;
//	}
//
//	long long ans = 0;
//
//	while (1)
//	{
//		long long x1 = -pq.top();
//		pq.pop();
//		long long x2 = -pq.top();
//		pq.pop();
//		ans += x1 + x2;
//		if (pq.empty())
//			break;
//		pq.push(-(x1 + x2));
//	}
//
//
//	cout << ans;
//}