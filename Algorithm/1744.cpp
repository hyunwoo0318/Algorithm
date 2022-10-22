//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//int main()
//{
//	int n, input;
//	int zero = 0;
//	priority_queue<int> pq_plus;
//	priority_queue<int>pq_minus;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> input;
//		if (input > 0)
//			pq_plus.push(input);
//		else if (input < 0)
//			pq_minus.push(-input);
//		else
//			zero++;
//	}
//
//	long long ans = 0;
//
//	while (pq_plus.size() != 0 && pq_plus.size() != 1)
//	{
//		int x1 = pq_plus.top(); pq_plus.pop();
//		int x2 = pq_plus .top(); pq_plus.pop();
//		ans += max(x1 * x2, x1 + x2);
//	}
//
//	while (pq_minus.size() != 0 && pq_minus.size()!=1)
//	{
//		int x1 = -pq_minus.top(); pq_minus.pop();
//		int x2 = -pq_minus.top(); pq_minus.pop();
//		ans += max(x1 * x2, x1 + x2);
//	}
//
//	if (pq_plus.size() == 1)
//	{
//		ans += pq_plus.top();
//	}
//	if (pq_minus.size() == 1)
//	{
//		if(zero < 1)
//		{
//			ans += -pq_minus.top();
//		}
//	}
//
//	cout << ans;
//
//
//}