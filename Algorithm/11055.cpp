//#include<iostream>
//#include<algorithm>
//
//using namespace std;
// 
//int arr[1001];
//int ans[1001];
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	for (int i = 1; i <= n; i++)
//	{
//		int a;
//		cin >> a;
//		arr[i] = a;
//	}
//
//	ans[1] = arr[1];
//
//	for (int i = 2; i <= n; i++)
//	{
//		//앞에 자신보다 작은수가 없는경우를 대비해서 temp를 0으로 설정함
//		int temp = 0;
//		for (int j = 1; j < i; j++)
//		{
//			if (temp < ans[j] && arr[j] < arr[i])
//				temp = ans[j];
//		}		
//		ans[i] = temp + arr[i];
//	}
//
//	sort(ans + 1, ans + n + 1);
//	cout << ans[n];
//	
//}