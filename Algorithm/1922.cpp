//#include<iostream>
//#include<vector>
//#include<queue>
//#include<cstring>
//
//using namespace std;
//
//int n, m, i1, i2, input;
//
//struct cmp {
//	bool operator()(pair<pair<int, int>, int > p1, pair<pair<int, int>, int > p2)
//	{
//		return p1.second > p2.second;
//	}
//};
//
//vector<pair<int,int> > v[1001];
//priority_queue<pair<pair<int, int> ,int >,vector<pair<pair<int,int>,int> >, cmp > pq;
//int r[1001];
//
//
//
//int findRoot(int x)
//{
//	int root = r[x];
//	int child = x;
//	while (root != -1)
//	{
//		child = root;
//		root = r[child];
//	}
//	return child;
//}
//
//int prim()
//{
//	int ans = 0;
//	bool check[1001] = { false };
//
//	priority_queue<pair<pair<int, int>, int>, vector<pair<pair<int, int>,int > >, cmp> pq;
//
//	//시작점을 1로잡음
//	check[1] = true;
//	int pos = 1;
//	int cnt = 1;
//
//	for (int i = 0; i < v[pos].size(); i++)
//	{
//		pq.push({ {pos, v[pos][i].first}, v[pos][i].second });
//	}
//
//	while (cnt < n)
//	{
//		int st = pq.top().first.first;
//		int des = pq.top().first.second;
//		int cost = pq.top().second;
//		pq.pop();
//		if (check[des])
//			continue;
//
//		int root1 = findRoot(st);
//		int root2 = findRoot(des);
//		//cycle check
//		if (root1 == root2)
//			continue;
//
//		//cycle도 형성하지 않음 -> 트리에 포함시켜야함
//		check[des] = true;
//		cnt++;
//		pos = des;
//		ans += cost;
//		
//
//		for (int i = 0; i < v[pos].size(); i++)
//		{
//			pq.push({ {pos, v[pos][i].first}, v[pos][i].second });
//		}
//
//
//	}
//	
//	return ans;
//}
//
//bool check(int x, int y)
//{
//	int root1 = findRoot(x);
//	int root2 = findRoot(y);
//	if (root1 != root2)
//		return true;
//	else
//		return false;
//}
//
//int kruskal()
//{
//	int ans = 0;
//	int cnt = 0;
//	
//	while (cnt < n- 1)
//	{
//		int st = pq.top().first.first;
//		int des = pq.top().first.second;
//		int cost = pq.top().second;
//		pq.pop();
//		if (!check(st, des))
//			continue;
//
//		//해당 간선 추가
//		cnt++;
//		ans += cost;
//		int rootDes = findRoot(des);
//		r[rootDes] = st;
//	}
//	return ans;
//}
//
//int main()
//{
//	cin >> n >> m;
//
//	memset(r, -1, sizeof(r));
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> i1 >> i2 >> input;
//		//For Prim
//		v[i1].push_back({ i2,input });
//		v[i2].push_back({ i1,input });
//
//		//For Kruskal
//		pq.push({ {i1,i2}, input });
//	
//	}
//
//	//cout << prim();
//	cout << kruskal();
//	
//}