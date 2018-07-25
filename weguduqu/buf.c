#include<string.h>
#include<stdio.h>

int main(void)
{
	char *buf1="JMP",*buf2="MOV",*buf3="INCR";
	int ptr;
	ptr=strcmp(buf2,buf1);
	if(ptr > 0)
	printf("********* \n Buffer 2 is the greater than Buffer 1\n********\n");
	else
	printf("*********  \n Buffer 2 is the less than Buffer    1\n********\n");
	ptr=strcmp(buf2,buf3);
	if(ptr>0)
	printf("********* \n Buffer 2 is the greater than Buffer 3 \n********\n");
	else
	printf("**********\nBuffer 2 is the less than Buffer 3 \n**********\n");
	//getch();
	return(0);
	}
