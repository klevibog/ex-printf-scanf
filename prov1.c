/*
 * prov1.c
 *
 *  Created on: 13 mar 2020
 *      Author: utente
 */

#include <stdio.h>
int main(int argc, char **argv) {
	int a,b,op;
	float c,d;


	printf("\n scrivi 2 numeri 'a' e 'b': ");
		scanf("\n %d %d", &a,&b);
		printf("\n che op vuoi fare:\n 1-piu \n2-meno \n3-multipl \n4-div\n");
		scanf("\n %d",&op);
		if(op==1)
		printf("\n %d",a+b);
		else if(op==2)
			printf("\n %d",a-b);
		else if(op==3)
			printf("\n %d",a*b);
		else if (op==4){
			c=a/b;
			d=b/a;
			printf("\n a/b %.1f oppure b/a %.1f",c,d);
		}
		else
			printf("operazione non valido");

		return 0;

}

