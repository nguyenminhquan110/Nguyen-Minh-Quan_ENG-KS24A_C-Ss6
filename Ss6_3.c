#include<stdio.h>
int main(){
	int pass = 0110, nhap;
	printf("hay nhap mat khau vao day: ");
	scanf("%d", &nhap);
	if(nhap == 0110){
		printf("chuc mung ban da mo khoa");
	} else{
		printf("sai mat khau hay hhap lai");
	}
    return 0;
}
