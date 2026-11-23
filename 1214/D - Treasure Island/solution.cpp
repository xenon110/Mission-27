// Codeforces 1214D - Treasure Island
// Lúcio Cardoso
 
#include <bits/stdc++.h>
 
using namespace std;
 
typedef pair<int, int> pii;
 
const int maxn = 1e6+10;
 
int n, m;
 
vector<pair<int, char>> tab[maxn];
 
int tt;
int in[maxn], low[maxn];
 
bool reach[maxn];
 
vector<int> grafo[maxn], dag[maxn];
 
bool tem;
 
int linha[] = {1, 0};
int coluna[] = {0, 1};
 
void dfs0(int u)
{
	reach[u] = 1;
	for (auto v: dag[u])
		if (!reach[v])
			dfs0(v);
}
 
bool dfs(int u, int p)
{
	in[u] = low[u] = ++tt;
 
	bool ja = 0;
 
	for (auto v: grafo[u])
	{
		if (in[v])
		{
			if (v != p)
				low[u] = min(low[u], in[v]);
 
			continue;
		}
 
		bool ja2 = dfs(v, u);
		ja |= ja2;
 
		if (ja2)
		{
			if (u != 1 && u != n*m)
			{
				if (low[v] >= in[u])
					tem = 1;
			}
		}
 
		low[u] = min(low[u], low[v]);
	}
 
	if (u == n*m) ja = 1;
	return ja;
}
 
int main(void)
{
	scanf("%d %d", &n, &m);
 
	int qtd = 0;
 
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			char c;
			scanf(" %c", &c);
			tab[i].push_back({++qtd, c});
		}
	}
 
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (tab[i][j-1].second == '#') continue;
 
			int u = tab[i][j-1].first;
 
			for (int k = 0; k < 2; k++)
			{
				int a = i+linha[k], b = j+coluna[k];
				if (a < 1 || a > n || b < 1 || b > m) continue;
 
				if (tab[a][b-1].second != '#')
					dag[u].push_back(tab[a][b-1].first);
			}
		}
	}
 
	dfs0(1);
 
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (tab[i][j-1].second == '#') continue;
 
			int u = tab[i][j-1].first;
 
			for (int k = 0; k < 2; k++)
			{
				int a = i+linha[k], b = j+coluna[k];
				if (a < 1 || a > n || b < 1 || b > m) continue;
 
				if (tab[a][b-1].second != '#' && reach[tab[a][b-1].first])
				{
					grafo[u].push_back(tab[a][b-1].first);
					grafo[tab[a][b-1].first].push_back(u);
				}
			}
		}
	}
 
	dfs(1, 0);
 
	if (!in[n*m])
	{
		printf("0
");
		return 0;
	}
 
	if (grafo[1].size() == 1)
	{
		printf("1
");
		return 0;
	}
 
	if (tem)
		printf("1
");
	else
		printf("2
");
}