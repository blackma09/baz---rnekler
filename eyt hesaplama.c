#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct eyt{
;char id[5];int bas,prim,yas;};
int emeklilik (struct eyt x[]) {
	int w,i=0;
	if(x[i].bas<2000&&x[i].prim>=7000&&x[i].yas>=48)w=1;
	else w=0;
	return w;
	
}
int main(int argc, char *argv[]) { 
int n,i;
	printf("n="); scanf("%d",&n);
	
	struct eyt a[n]; char b[5]; int sonuc=0;
	for(i=0;i<n;i++) {
	
	printf("id\n"); gets(a[i].id);
	printf("baslangic\n");
	scanf("%d ",&a[i].bas);
	printf("prim\n");
		scanf("%d  ",&a[i].prim);
	printf("yas\n");
		scanf("%d ",&a[i].yas);
	sonuc=sonuc+emeklilik(a);}
	printf("%d kisi emekli ",sonuc);

	
	return 0;
}
