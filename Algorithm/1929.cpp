//#include<iostream>
//#include<math.h>
//#include<stdio.h>
//
//using namespace std;
//
////main������ �ſ� ū �迭�� �����ϸ� stack�޸𸮰� ���������� ������ ��
////�׷��� �ſ� ū �迭�� �����Ҷ��� �׳� ���������� �����ϸ��.
//int arr[1000000] = {};
//
//int main()
//{	
//	for (int i = 0; i < 1000000; i++)
//		arr[i] = i;
//	arr[1] = 0;
//	for (int i = 0; i < 1000; i++)
//	{
//		if (arr[i] == 0)
//			continue;
//		else
//		{
//			for (int j = 2 * i; j <= 1000000; j += i)
//			{
//				arr[j] = 0;
//			}
//		}
//	}
//
//	//Ȯ���� cin,cout�� scanf,printf�� �ӵ� ���̰� �ִ�
//	//�̷��� ����ó�� ����̳� �Է��� ��� �ؾ��ϴ� ������ printf�� ����.
//	//�ΰ��� ȥ���ϸ� �����Ƽ� �ϳ��� ���°� ����
//	int m, n;
//	scanf("%d %d", &m, &n);
//
//	for (int i = m; i <= n; i++)
//	{
//		if (arr[i] != 0) printf("%d\n", arr[i]);
//	}
//}