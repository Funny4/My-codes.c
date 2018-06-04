#include <bits/stdc++.h>
using namespace std;

vector <int> v[100005];
int vis[100005];

void bfs (int x)
{
   int i,p;
   queue <int> q;

   q.push(x);
   vis[x]=1;

   while (q.empty()==0)
   {

   p=q.front();
   cout<<p<<endl;
   q.pop();

   for (i=0;i<v[p].size();i++)
   {
       if (vis[v[p][i]]==0)
       {
           q.push(v[p][i]);
           vis[v[p][i]]=1;
       }
   }
   }
}

int main()
{
    int n,e,x,y;
    cin>>n>>e;

    while (e--)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    bfs(0);
}
