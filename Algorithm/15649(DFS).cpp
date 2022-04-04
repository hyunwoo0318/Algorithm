//#include<iostream>
//
//using namespace std;
//
//int n, k;
//int arr[9];
//bool visited[9]; // 해당하는 값(idx)을 썻는지 안썼는지 확인
//
//void dfs(int cnt)
//{
//	if (cnt == k)
//	{
//		//끝까지 방문했을때
//		for (int i = 0; i < k; i++)
//		{
//			cout << arr[i] << " ";
//
//		}
//		cout << "\n";
//
//	}
//	else
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			if (visited[i] == false)
//			{
//				visited[i] = true;
//				//k번째 원소를 i로 저장
//				arr[cnt] = i;
//				//다음번째 원소를 찾음
//				dfs(cnt + 1);
//				//일로 돌아온거는 k번째 원소로 i를 쓰는게 끝난거임.
//				//이제 다시 이 i는 사용되지 않았다고 알려줘야함.
//				//이게 백트래킹의 기본.
//				visited[i] = false;
//			}
//					
//		}
//	}
//
//}
//
//int main()
//{
//	cin >> n >> k;
//	dfs(0);
//}