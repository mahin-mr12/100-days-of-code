// manual swap of two numbers
#include <stdio.h>
int main(){
	int a = 10,b = 25,temp;
	temp = a;
	a = b;
	b = temp;
	printf("%d\n",a);
	printf("%d\n",b);
}
