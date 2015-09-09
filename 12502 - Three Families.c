#include<stdio.h>
int main(){
	float t,a,b,c,ab,ba;
	int heda;
	scanf("%f",&t);
	while(t--){
		scanf("%f %f %f",&a,&b,&c);
		ab=a+b;
		ba=a-b;
		heda=(c/ab)*(a+ba);
		printf("%d\n",heda);
	}
    return 0;
}
