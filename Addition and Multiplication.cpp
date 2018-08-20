#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
int tree[1000007];
int lazy[3000007];
int lazy1[3000007];
int lazy3[3000007];
int A[1000007];
void init()
{
	for(int i=0;i<=1000007;++i)
	  lazy1[i] = 1;
}
void check(int node, int start, int end)
{
    if(lazy1[node] != 1)
    { 
        tree[node] *= lazy1[node];
		tree[node] = tree[node]%M;    // Update it
        if(start != end)
        {
            lazy1[node*2] *= lazy1[node];                  // Mark child as lazy
            lazy1[node*2+1] *= lazy1[node];                // Mark child as lazy
        }
        lazy1[node] = 1;                                  // Reset it
    }
    if(lazy3[node] != 0)
    { 
        tree[node] = (end - start + 1) * lazy3[node]; 
		tree[node] = tree[node]%M;   // Update it
        if(start != end)
        {
            lazy3[node*2] = lazy3[node];                  // Mark child as lazy
            lazy3[node*2+1] = lazy3[node];                // Mark child as lazy
        }
        lazy3[node] = 0;                                  // Reset it
    }
	
    if(lazy[node] != 0)
    { 
        tree[node] += (end - start + 1) * lazy[node]; 
		tree[node] = tree[node]%M;   // Update it
        if(start != end)
        {
            lazy[node*2] += lazy[node];                  // Mark child as lazy
            lazy[node*2+1] += lazy[node];                // Mark child as lazy
        }
        lazy[node] = 0;                                  // Reset it
    }	
}
void build(int node, int start, int end)
{
    if(start == end)
    {
        tree[node] = A[start];
    }
    else
    {
        int mid = (start + end) / 2;
        build(2*node, start, mid);
        build(2*node+1, mid+1, end);
        tree[node] = (tree[2*node]%M + tree[2*node+1]%M)%M;
    }
}

void updateRangeadd(int node, int start, int end, int l, int r, int val)
{
    check(node,start,end);
    if(start > end || start > r || end < l)              // Current segment is not within range [l, r]
        return;
    if(start >= l && end <= r)
    {
        // Segment is fully within range
        tree[node] += (end - start + 1) * val;
        tree[node] = tree[node]%M;
        if(start != end)
        {
            // Not leaf node
            lazy[node*2] += val;
            lazy[node*2+1] += val;
        }
        return;
    }
    int mid = (start + end) / 2;
    updateRangeadd(node*2, start, mid, l, r, val);        // Updating left child
    updateRangeadd(node*2 + 1, mid + 1, end, l, r, val);   // Updating right child
    tree[node] = (tree[node*2]%M + tree[node*2+1]%M)%M;        // Updating root with max value 
}

void updateRangemul(int node, int start, int end, int l, int r, int val)
{
	check(node,start,end);
    if(start > end || start > r || end < l)              // Current segment is not within range [l, r]
        return;
    if(start >= l && end <= r)
    {
        tree[node] *= val;
        tree[node] %= M;
        if(start != end)
        {
            lazy1[node*2] *= val;
            lazy1[node*2+1] *= val;
        }
        return;
    }
    int mid = (start + end) / 2;
    updateRangemul(node*2, start, mid, l, r, val);        // Updating left child
    updateRangemul(node*2 + 1, mid + 1, end, l, r, val);   // Updating right child
    tree[node] = (tree[node*2]%M + tree[node*2+1]%M)%M;        // Updating root with max value 
}
  
void updateRange(int node, int start, int end, int l, int r, int val)
{
     check(node,start,end);
    if(start > end || start > r || end < l)              // Current segment is not within range [l, r]
        return;
    if(start >= l && end <= r)
    {
        // Segment is fully within range
        tree[node] = (end - start + 1) * val;
        tree[node] = tree[node]%M;
        if(start != end)
        {
        
            // Not leaf node
            lazy3[node*2] = val;
            lazy3[node*2+1] = val;
        }
        return;
    }
    int mid = (start + end) / 2;
    updateRange(node*2, start, mid, l, r, val);        // Updating left child
    updateRange(node*2 + 1, mid + 1, end, l, r, val);   // Updating right child
    tree[node] = (tree[node*2]%M + tree[node*2+1]%M)%M;        // Updating root with max value 
}
int queryRange(int node, int start, int end, int l, int r)
{  
    if(start > end || start > r || end < l)
        return 0;         // Out of range
    check(node,start,end);    
    if(start >= l && end <= r)             // Current segment is totally within range [l, r]
        return tree[node];
    int mid = (start + end) / 2;
    int p1 = queryRange(node*2, start, mid, l, r);         // Query left child
    int p2 = queryRange(node*2 + 1, mid + 1, end, l, r); // Query right child
    return (p1 + p2)%M;
}
int main()
{
	init();
	int n,q;   cin>>n>>q;
	for(int i=1;i<=n;++i)
	{
		  cin>>A[i];
	}
	build(1,1,n);
	while(q--)
	{
		int x;  cin>>x;
		if(x==1)
		{
			int l,r,val;  cin>>l>>r>>val;
			updateRangeadd(1,1,n,l,r,val);
		}
		else if(x==2)
		{
			int l,r,val;  cin>>l>>r>>val;
			updateRangemul(1,1,n,l,r,val);			
		}
		else if(x==3)
		{
			int l,r,val;  cin>>l>>r>>val;
			updateRange(1,1,n,l,r,val);			
		}
		else
		{
			int l,r;   cin>>l>>r;
			cout<<queryRange(1,1,n,l,r)<<endl;;
		}
	}
}
