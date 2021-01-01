#include<bits/stdc++.h>
using namespace std;

int i,j,grid[10][10];

void printgrid(int n) {
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                if(grid[i][j])
                    cout<<"Q   ";
                else
                    cout<<"*   ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

bool isSafe(int col, int row, int n) {
    for(i=0;i<row;i++)
        if(grid[i][col])
            return false;
    for(i=row,j=col;i>=0 && j>=0;i--,j--)
        if(grid[i][j])
            return false;
    for(i=row,j=col;i>=0 && j<n;i--,j++)
        if (grid[i][j])
            return false;

    return true;
}

bool nqueen(int n, int row) {
    if(n==row){
        printgrid(n);
        return true;
    }
    bool res=false;
    for (int i = 0;i <=n-1;i++) {
        if (isSafe(i, row, n)) {
            grid[row][i]=1;
            res=nqueen(n,row+1) || res;//if res ==false then backtracking will occur
            grid[row][i] = 0;
        }
    }
    return res;
}


int main()
{
    int n;
    cout<<"\t Implementation of N-Queen problem\n";
    cout<<"\t===================================\n";
    cout<<"Enter the number of Queens : ";
    cin>>n;
    bool res=nqueen(n, 0);
    if(res==false)
        cout<<-1<<endl;
    return 0;
}
