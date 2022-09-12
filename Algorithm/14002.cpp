//#include<iostream>
//#include<deque>
//
//using namespace std;
//
//int arr[1001] = {};
//int w[1001] = {};
//int p[1001] = {};
//
//int main()
//{
//	int N,a;
//	int ans = 0;
//	int point=0;
//	cin >> N;
//	deque<int> dq;
//
//	for (int i = 1; i <= N; i++)
//	{
//		cin >> a;
//		w[i] = a;
//		arr[i] = 1;
//	}
//
//	
//
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j < i; j++)
//		{
//			//갱신하는 경우
//			if (w[i] > w[j] && arr[i] < arr[j] + 1)
//			{
//				arr[i] = arr[j] + 1;
//				p[i] = j;
//			}				
//		}
//		if (arr[i] > ans)
//		{
//			ans = arr[i];
//			point = i;
//		}
//	}
//	
//	int path = point;
//	while (path != 0)
//	{
//		dq.push_front(w[path]);
//		path = p[path];
//	}
//	cout << ans<< endl;
//	for (int i = 0; i < dq.size(); i++)
//	{
//		cout << dq[i] << " ";
//	}
//	
//
//}