#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	FILE *fpa;
	FILE *fpb;
	FILE *fpc;
	int i = 0;
	int j = 0;
	char temp;
	char A[100];
	char B[100];
	if((fpa = fopen("A.txt","r+")) == NULL);
	{
		printf("open the A.txt failure");
		exit(0);
	}

	fgets(A,100,fpa);
	fclose(fpa);

	if((fpb = fopen("B.txt","r")) == NULL);
	{
		printf("open the B.txt failure");
		exit(0);
	}

	fgets(B,100,fpb);
	fclose(fpb);

	strcat(A,B);
	
	printf("A of length:%ld %ld",sizeof(A),strlen(A));
	
	for(i = strlen(A) - 1; i>1; i--)
	{
		for(j = 0; j < i; j++)
		{

			if(A[j] > A[i])
			{
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
	
	if((fpc = fopen("C.txt","w")) == NULL )
	{
		printf("open the file failure");
		exit(0);

	}
  	fputs(A,fpc);
	fclose(fpc);

	system("pause");

	return 0;


}
