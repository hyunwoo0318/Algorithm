//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
////지불 금액의 최댓값
//int arr[1001];
//
//int input[10001];
//
//
//bool compare(pair<double, int>a, pair<double, int>b)
//{
//	if (a.first != b.first)
//		return a.first > b.first;
//	else
//		return a.second < b.second;
//}
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N;
//	cin >> N;
//
//	arr[0] = 0;
//
//	for (int i = 1; i <= N; i++)
//	{
//		int a;
//		cin >> a;
//		input[i] = a;		
//	}
//
//	
//	//dp시작
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= N; j++)
//		{			
//			if (i >= j)
//			{
//				arr[i] = max(arr[i], arr[i - j] + input[j]);
//			}
//			else
//				break;
//		}
//	}
//	cout << arr[N];
//}