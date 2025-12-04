#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<vector<int>> list;
vector<int> visited;
int order = 1;

void bfs(int start)
{
	queue<int> que;

	visited[start] = order++;
	que.push(start);

	while (!que.empty())
	{
		int current = que.front();
		que.pop();

		for (int i = 0; i < list[current].size(); i++)
		{
			int next = list[current][i];
			if (!visited[next])
			{
				que.push(next);
				visited[next] = order++;
			}
		}
	}
}

bool compare(int a, int b)
{
	return a > b;
}

int main()
{
	int N, M, R;

	cin >> N >> M >> R;

	list = vector<vector<int>>(N + 1);
	visited = vector<int>(N + 1, 0);

	for (int i = 0; i < M; i++)
	{
		int u, v;

		cin >> u >> v;

		list[u].push_back(v);
		list[v].push_back(u);
	}

	for (int i = 0; i < N + 1; i++)
		sort(list[i].begin(), list[i].end(), compare);

	bfs(R);

	for (int i = 1; i < N + 1; i++)
		cout << visited[i] << '\n';

	return 0;
}