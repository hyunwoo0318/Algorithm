//#include<iostream>
//#include<math.h>
//#include<stdio.h>
//
//using namespace std;
//
////main내에서 매우 큰 배열을 선언하면 stack메모리가 터져버려서 오류가 남
////그래서 매우 큰 배열을 선언할때는 그냥 전역변수로 선언하면됨.
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
//	//확실히 cin,cout과 scanf,printf는 속도 차이가 있다
//	//이러한 문제처럼 출력이나 입력을 계속 해야하는 문제는 printf를 쓰자.
//	//두개를 혼용하면 안좋아서 하나만 쓰는게 좋음
//	int m, n;
//	scanf("%d %d", &m, &n);
//
//	for (int i = m; i <= n; i++)
//	{
//		if (arr[i] != 0) printf("%d\n", arr[i]);
//	}
//}