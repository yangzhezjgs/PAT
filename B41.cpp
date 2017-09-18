#include <cstdio>
int main(){
	int num,n=0;
	int count[10]={0};
	scanf("%d",&num);
	while(num!=0){
		n = num%10;
		count[n]++;
		num /=10;
	}
	for(int i = 0;i<10;i++){
		if(count[i] != 0){
			printf("%d:%d\n",i,count[i]);
		}
	}
	return 0;
}
