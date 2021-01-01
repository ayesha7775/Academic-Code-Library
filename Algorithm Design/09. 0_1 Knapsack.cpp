#include<bits/stdc++.h>
using namespace std;

int V[10000][10000];

void knapSack(int W, int n, int val[], int wt[]) {
	int i, w;
	for(i = 1; i <= n; i++) {
		for(w = 1; w <= W; w++) {
			if(wt[i] <= w)
				V[i][w] = max(V[i-1][w], val[i] + V[i-1][w - wt[i]]);
            else
				V[i][w] = V[i-1][w];
		}
	}
	printf("Max Value: %d\n", V[n][W]);
}

int main()
{
    int n,w,i,j;
    cout<<"Enter the maximum number of product: ";
    cin>>n;
    cout<<"Enter the maximum weight of total product: ";
    cin>>w;
    int val[n+2],wt[n+2];
    cout<<"\nEnter the profit for each product: ";
    for(int i=1;i<=n;++i)
        cin>>val[i];
    cout<<"\nEnter the weight for each product respectively: ";
    for(int i=1;i<=n;++i)
        cin>>wt[i];
	knapSack(w, n, val, wt);

	return 0;
}
