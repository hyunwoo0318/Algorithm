//#include<iostream>
//#include<math.h>
//using namespace std;
//
//struct circle
//{
//	int x;
//	int y;
//	int r;
//};
//
//double dist(int x1, int y1, int x2, int y2)
//{
//	//fabs함수를 이용해서 절댓값을 사용 math.h를 include하면 사용할수있음
//	return sqrt(pow((fabs(x2 - x1)), 2) + pow((fabs(y2 - y1)), 2));
//}
//
//int main()
//{
//	int N;
//	cin >> N;
//	circle t1, t2;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> t1.x >> t1.y >> t1.r;
//		cin >> t2.x >> t2.y >> t2.r;
//
//		if (t1.x == t2.x && t1.y == t2.y && t1.r == t2.r)
//		{
//			cout << -1 << endl;
//			continue;
//		}
//			
//
//		double d = dist(t1.x, t1.y, t2.x, t2.y);
//
//		if (t1.r + t2.r == d || fabs(t2.r - t1.r) == d)
//			cout << 1 << endl;
//		else if (t1.r + t2.r < d || fabs(t2.r - t1.r) > d)
//			cout << 0 << endl;
//		else
//			cout << 2 << endl;
//	}
//	
//	
//
//
//}