#include <stdio.h>
#include <stdlib.h>

/* void ile int vb.(float char double ) farký deðer döndürmesidir int türü fonksiyonda herhangi bir deðiþkene eþitleyebiliriz fakat void türü fonksiyonda bu mümkün deðildir */






int main(int argc, char *argv[]) {
	char b[56],a[45],c[78];
gets(b);
	
	
	int x,i;
	x=0;
	
	while(b[x]!='\0') {
		

x++; }
for(i=0;i<x;i++){

if(b[i]>=97){
	a[i]=b[i];
}
if(b[i]<91){
	c[i]=b[i];
}
}
for(i=0;i<x;i++){
	printf("%c\n",a[i]);
		printf("%c",c[i]);
	
}
printf("%d",x);
	
	return 0;
}
