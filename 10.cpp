#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long LL;
LL Map[256];
LL inf = (1LL << 63) - 1;

void init(){
	for(char c = '0';c <= '9';c++){
		Map[c] = c - '0';
	}
	for(char c = 'a';c <= 'z';c++){
		Map[c] = c - 'a' + 10;
	}
}

char N1[20],N2[20],temp[20];
int tag,radix;
int main(){
	init();
	scanf("%s %s %d %d",N1,N2,&tag,&radix);
	if
}
