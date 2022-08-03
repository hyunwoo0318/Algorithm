//#include<iostream>
//
//using namespace std;
//
//bool arr[2001][2001] = {false};
//int v[2001] = {};
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N,a;
//	cin >> N;
//	for (int i = 1; i <= N; i++)
//	{
//		cin >> a;
//		v[i] = a;
//		//길이가 1인 문자열은 무조건 팰린드롬이다.
//		arr[i][i] = true;
//	}
//	
//	for (int dist = 1; dist <= N - 1; dist++)
//	{
//		for (int i = 1; i <= N; i++)
//		{
//			int j = i + dist;
//			if (j > N)
//				break;
//			if (dist == 1)
//			{
//				if (v[i] == v[j])
//					arr[i][j] = true;
//			}
//			else
//			{
//				if (arr[i + 1][j - 1] && v[i] == v[j])
//					arr[i][j] = true;			
//			}
//		}
//	}
//
//	int cnt;
//	cin >> cnt;
//
//	while (cnt--)
//	{
//		int x1, x2;
//		cin >> x1 >> x2;
//		if (arr[x1][x2])
//			cout << 1 << "\n";
//		else
//			cout << 0 << "\n";
//	}
//
//
//}