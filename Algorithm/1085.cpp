//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//int main()
//{
//	int x, y, w, h;
//	cin >> x >> y >> w >> h;
//
//	//int minNum = min(x, y);
//	//minNum = min(minNum, (w - x));
//	//minNum = min(minNum, (h - y));
//
//	int minNum = min(min(x, w - x), min(y, h - y));
//	//여러개를 비교할때는 이렇게 중첩으로 사용하면 좀더 간결하게 표현할수있음
//
//	cout << minNum << endl;
//}