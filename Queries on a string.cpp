#include <bits/stdc++.h>
using namespace std;
int tree[1000007];   char A[1000007]; 
map<int,int> m;
void build(int node, int start, int end)
{
    if(start == end)
    {
        tree[node] = (int)(A[start]-'0');
        if(tree[node]%3==0)
        m[tree[node]]++;
    }
    else
    {
        int mid = (start + end) / 2;
        build(2*node, start, mid);
        build(2*node+1, mid+1, end);
        tree[node] = (tree[2*node] + tree[2*node+1]);
        if(tree[node]%3==0)
        m[tree[node]]++;        
        m[tree[node]] = m[tree[node]] + m[tree[node*2]] + m[tree[node*2 + 1]];
    }
}
void update(int node, int start, int end, int idx, int val)
{
    if(start == end)
    {
    	m[tree[node]] = 0;
        tree[node] = val;
        if(tree[node]%3==0)
        m[tree[node]]++;                
    }
    else
    {
        int mid = (start + end) / 2;
        if(start <= idx and idx <= mid)
            update(2*node, start, mid, idx, val);
        else
            update(2*node+1, mid+1, end, idx, val);
        tree[node] = (tree[2*node] + tree[2*node+1]);
        if(tree[node]%3==0)
        m[tree[node]]++;        
        m[tree[node]] = m[tree[node]] + m[tree[node*2]] + m[tree[node*2 + 1]];
    }
}
int query(int node, int start, int end, int l, int r)
{
    if(r < start or end < l)
        return 0;
    if(l <= start and end <= r)
        return tree[node];
    int mid = (start + end) / 2;
    int p1 = query(2*node, start, mid, l, r);
    int p2 = query(2*node+1, mid+1, end, l, r);
    return (p1 + p2);
}
int main()
{
	int n,q;   cin>>n>>q;
    cin>>A;	
    build(0,0,n-1);
	while(q--)
	{
		int d,l;  cin>>d>>l;
		if(d==1)
		{
			char r;  cin>>r; A[l-1] = r;
			int f = (int)(r-'0');
			update(0,0,n-1,l-1,f);
		}
		else
		{
			int r;  cin>>r;
		    int re = query(0,0,n-1,l-1,r-1);
		  cout<<m[re]<<endl;
		}
	}
}
