#include <bits/stdc++.h>
using namespace std;

#define N 10007
char a[N][N];
int ch[N][N];
int main(){

    cin.tie(0)->ios::sync_with_stdio(0);
    int n,m,i,j;
    cin >> n >> m;
    for( i=1;i<=n;i++){
        for( j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    for( i=1;i<=m;i++)   a[n+1][i]='0';
    int k;
    for( j=1;j<=m;j++){
        cin >> k;
        while(k--){
            for( i=1;i<=n;i++){
                if(a[i][j]!='.')    break;
            }
            a[i-1][j]='#';
        }
    }
    for( i=1;i<=n;i++){
        for( j=1;j<=m;j++){
            cout << a[i][j];
        }
        cout << '\n';
    }
    return 0;
}
