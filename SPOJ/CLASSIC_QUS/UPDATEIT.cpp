#include <cstdio>
#include <cstring>
#define LSOne(S) (S & (-S))
using namespace std;
long long int ft[10005];	
int N;
long long int query(int b)	{
	long long int sum = 0;
	for (; b; b -= LSOne(b)) sum += ft[b];
	return sum;
}
void update(int k, int v) {
	for (; k <= N; k += LSOne(k)) ft[k] += v;
}
void range_update(int i, int j, int v)	{
	update(i, v);
	update(j + 1, -v);
}

int main()  {
	int T, U, Q, i, l, r, val;
	
	scanf("%d", &T);
	while (T--)	{
		scanf("%d %d", &N, &U);
		memset(ft, 0, (N+1) * sizeof(long long int));
		
		
		for (i = 0; i < U; i++)	{
			
			scanf("%d %d %d", &l, &r, &val);
			range_update(l + 1, r + 1, val);
		}
		
		scanf("%d", &Q);
		for (i = 0; i < Q; i++)	{
	
			scanf("%d", &val);
			printf("%lld\n", query(val + 1));
		}
	}

    return 0;
}