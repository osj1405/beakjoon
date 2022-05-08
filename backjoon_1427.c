#include <stdio.h>
#include <string.h>

int main(void){
	char N[10];
	scanf("%s",N);
	char buf;

	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(N[j]<N[j+1]){
				buf=N[j];
				N[j]=N[j+1];
				N[j+1]=buf;
			}
		}

	}
	printf("%s",N);
	return 0;
}
