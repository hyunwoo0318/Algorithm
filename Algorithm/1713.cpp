//#include<iostream>
//#include<queue>
//#include<stack>
//#include<vector>
//
//using namespace std;
//
//bool post[101] = { false };
//
////pair.second-> first = 추천횟수, second = 들어온 순서
//struct cmp
//{
//	bool operator()(pair<int,pair<int, int> > p1, pair<int,pair<int, int> > p2)
//	{
//		if (p1.second.first != p2.second.first)
//			return p1.second.first > p2.second.first;
//		else
//			return p1.second.second >  p2.second.second;
//	}
//};
//
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//
//	priority_queue<pair<int, pair<int, int> >,vector<pair<int,pair<int,int>>>, cmp > pq;
//
//	for (int i = 1; i <= k; i++)
//	{
//		int vote;
//		cin >> vote;
//		
//		//사진관에 없는경우
//		if (!post[vote])
//		{					
//			if(pq.size()== n)
//			{
//				pair<int, pair<int,int> > x = pq.top();
//				post[x.first] = false;
//				pq.pop();				
//			}
//			pq.push({ vote, {1, i} });
//			post[vote] = true;
//		}
//		else // 사진관에 사진이 있는경우
//		{
//			vector<pair<int, pair<int, int> > > v;
//			while (1)
//			{
//				pair<int,pair<int,int> > x = pq.top();
//				pq.pop();
//				if (x.first== vote)
//				{					
//					for (int i = 0; i < v.size(); i++)
//					{
//						pq.push(v[i]);
//					}
//					pq.push({ x.first, {x.second.first + 1, x.second.second} });
//					break;
//				}
//				v.push_back(x);
//							
//			}
//		}		
//	}
//
//	for (int i = 1; i <= 100; i++)
//	{
//		if (post[i])
//			cout << i << " ";
//	}
//}