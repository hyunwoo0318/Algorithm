//#include<iostream>
//#include<vector>
//#include<climits>
//
//using namespace std;
//
//vector<int> v;
//int arr[501][501] = {};
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N,a,b;
//	cin >> N;
//
//	cin >> a >> b;
//	v.push_back(a);
//	v.push_back(b);
//
//	for (int i = 1; i < N; i++)
//	{		
//		cin >> a >> b;
//		v.push_back(b);
//	}
//
//	for (int dist = 1; dist < N; dist++)
//	{
//		for (int i = 1; i < N; i++)
//		{
//			int j = i + dist;
//			if (j > N)
//				break;
//			int value = INT_MAX;
//
//			for (int k = i; k < j; k++)
//			{
//				value = min(value, arr[i][k] + arr[k + 1][j] + v[i - 1] * v[k] * v[j]);
//			}
//			arr[i][j] = value;
//
//		}
//	}
//	cout << arr[1][N];
//}