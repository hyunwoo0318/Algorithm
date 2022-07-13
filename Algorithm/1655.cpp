//#include<iostream>
//#include<queue>
//
//using namespace std;
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
//	priority_queue<int> q1;
//	priority_queue<int, vector<int>, greater<int> > q2;
//	for (int i = 1; i <= n; i++)
//	{
//		int a;
//		cin >> a;
//		q1.push(a);
//		q2.push(a);
//		
//		if (i == 1)
//			cout << a << "\n";
//		else if (i % 2 == 0)
//		{
//			cout << min(q1.top(), q2.top()) << "\n";
//		}
//		else
//		{
//			q1.pop();
//			q2.pop();
//			cout << q1.top() << "\n";
//		}
//	}
//}