//Warshall's shortest path matrix
#include<stdio.h>

int main()
{
	int i,j,k,v,A[20][20],B[20][20];
	printf("Enter the number of vertex in the graph:");
	scanf("%d",&v);
    for(i=1; i<=v; i++){
        for(j=1; j<=v; j++){
			printf("Edge from vertex %d to %d:  ",i,j);
			scanf("%d",&B[i][j]);
		}
	}
    for(i=1; i<=v; i++){
		for(j=1; j<=v; j++){
			A[i][j] = B[i][j] ? 1 : 0;
		}
	}
	for(k=1; k<=v; k++)
        for(i=1; i<=v; i++)
            for(j=1; j<=v; j++)
				     A[i][j] = (A[i][j] | (A[i][k] & A[k][j]));
	printf("Path Matrix:\n\n");
	for(i=1; i<=v; i++){
        for(j=1; j<=v; j++)
			printf("%5d",A[i][j]);
		printf("\n");
	}
	printf("\n\n");
	return 0;
}
