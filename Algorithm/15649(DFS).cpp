//#include<iostream>
//
//using namespace std;
//
//int n, k;
//int arr[9];
//bool visited[9]; // �ش��ϴ� ��(idx)�� ������ �Ƚ���� Ȯ��
//
//void dfs(int cnt)
//{
//	if (cnt == k)
//	{
//		//������ �湮������
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
//				//k��° ���Ҹ� i�� ����
//				arr[cnt] = i;
//				//������° ���Ҹ� ã��
//				dfs(cnt + 1);
//				//�Ϸ� ���ƿ°Ŵ� k��° ���ҷ� i�� ���°� ��������.
//				//���� �ٽ� �� i�� ������ �ʾҴٰ� �˷������.
//				//�̰� ��Ʈ��ŷ�� �⺻.
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