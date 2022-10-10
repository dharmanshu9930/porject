#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
char arr[101][101];
void dxcs() {
  cin >> n >> m;
  bool flag=false,flag1=false;;
  for(int i=1;i<=n;++i)
    for(int j=1;j<=m;++j) {
      cin >> arr[i][j];
      if(arr[i][j]=='.') flag=true;
      if(arr[i][j]=='^') flag1=true;
    }
  if(n==1||m==1) {
    if(flag&&flag1) {
      puts("Impossible");
      return;
    } else {
      puts("Possible");
      for(int i=1;i<=n;++i) {
        for(int j=1;j<=m;++j)
          cout << arr[i][j];
        cout << endl;
      }
      return;
    }
  }
  puts("Possible");
  for(int i=1;i<=n;++i) {
    for(int j=1;j<=m;++j)
      putchar('^');
    putchar('\n');
  }
}
signed main() {
  int T;
  cin >> T;
  for(int i=1;i<=T;++i) {
    cout << "Case #" << i << ": ";
    dxcs();
  }
}
