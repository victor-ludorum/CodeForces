#include <bits/stdc++.h>
using namespace std;
#define MAX 1000007
int lp[1000007];
bool v[1000007];
int a[MAX];
int getMid(int s, int e) {  return s + (e -s)/2;  }

 void init()
{
	lp[1] =1, lp[0] = 1;
   for(int i=2;i*i<=1000000;++i)
 {
	if(!v[i])
	{
		lp[i] = i;
		for(int j=2*i;j<=1000000;j+=i)
		{
			lp[j] = lp[j]!=0?min(lp[j],i):i;
			 v[j] = true;
		}
	}
  }
}

int tree[MAX] = {0};  // To store segment tree
int lazy[MAX] = {0};  // To store pending updates

void updateRangeUtil(int si, int ss, int se, int us,int ue)
{
    if (ss>se || ss>ue || se<us)
        return ;
        
      if(ss==se)
	  {
	        a[ss] = a[ss]/lp[a[ss]];
		 	tree[si] = lp[a[si]];  return ;
	  } 
	   
    int mid = (ss+se)/2;
    updateRangeUtil(si*2+1, ss, mid, us, ue);
    updateRangeUtil(si*2+2, mid+1, se, us, ue);
    tree[si] = max(tree[si*2+1], tree[si*2+2]);
}

void updateRange(int n, int us, int ue)
{
   updateRangeUtil(0, 0, n-1, us, ue);
}

int getSumUtil(int ss, int se, int qs, int qe, int si)
{
    if (ss>se || ss>qe || se<qs)
        return 0;
    if(tree[si]==1)
       return 1;
    if (ss>=qs && se<=qe)
        return tree[si];
    int mid = (ss + se)/2;
    return max(getSumUtil(ss, mid, qs, qe, 2*si+1) , getSumUtil(mid+1, se, qs, qe, 2*si+2));
}

int getSum(int n, int qs, int qe)
{
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        printf("Invalid Input");
        return -1;
    }
 
    return getSumUtil(0, n-1, qs, qe, 0);
}

void constructSTUtil(int arr[], int ss, int se, int si)
{
    if (ss > se)
        return ;
    if (ss == se)
    {
        tree[si] = lp[arr[ss]];
        return;
    }
    int mid = (ss + se)/2;
    constructSTUtil(arr, ss, mid, si*2+1);
    constructSTUtil(arr, mid+1, se, si*2+2);
 
    tree[si] = max(tree[si*2 + 1],tree[si*2 + 2]);
}

void constructST(int arr[], int n)
{
    constructSTUtil(arr, 0, n-1, 0);
}

 int main()
{
	init();
    int t;   cin>>t;
	while(t--)
	{
	  int n,m;   cin>>n>>m;
	  
	  for(int i=0;i<n;++i)
	     cin>>a[i];
	  
	   constructST(a,n);
	  while(m--)
	  {
	     int d,l,r;  cin>>d>>l>>r;
		 if(d==0)
		 {
	       updateRange(n,l-1,r-1);	 	
	     }  	
	     else
	     {
	     	cout<<getSum(n,l-1,r-1)<<" ";
		 }
	  }	
	  cout<<endl;
	}	
}
