#include<bits/stdc++.h>
using namespace std;

int const maxn = 5e3 + 10;

int N, K, A[maxn];

int main()
{
  int T, kase = 0;
  scanf("%d", &T);

  while (T--) {
    scanf("%d%d", &N, &K);
    for (int i = 0; i < N; i++) scanf("%d", &A[i]);

    sort(A, A+N);

    int day = 0, eat = 0;
    for (int i = 0; i < N; i++) {
      if (A[i] - day <= 0) continue;
      if (++eat % K == 0) day++;
    }

    printf("Case #%d: %d\n", ++kase, eat);
  }

  return 0;
}
