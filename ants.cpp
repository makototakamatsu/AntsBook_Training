int L,n;
int x[MAX_N];

void solve(){
  int minT=0;
  for(int i=0;i<n;i++){
    minT=max(minT,min(x[i],L-x[i]));
  }

  int maxT=0;
  for(int i=0;i<n;i++){
    maxT=max(maxT,max(x[i],L-x[i]));
  }
  printf("%d %d\n",minT,maxT);
}
