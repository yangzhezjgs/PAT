#include <cstdio>
int main(){
	int k,t=0;
	long long a,b,c;
	scanf("%d",&k);
	while(k--){
		scanf("%lld%lld%lld",&a,&b,&c);
		t++;
		if(a + b > c){
			printf("Case #%d:true",t);
		}else{
			printf("Case #%d:false",t);
		}
	}

return 0;
}
