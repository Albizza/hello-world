#include<stdio.h>
#include<stdlib.h>


typedef struct{
	char name[20];
	int Math;
	int English;
	int C;
	int avergrade;
	int ID;
}Stu;
int main()
{
	FILE *fp;
	int i=0;
	Stu stu[0];
	printf("请输入1个同学的信息，包括姓名，数学，英语，C, ID:\n");
	
	
		scanf("%s%d %d %d %d",stu[i].name,&(stu[i].Math),&(stu[i].English)
					,&(stu[i].C), &(stu[i].ID));
   		stu[i].avergrade=(stu[i].Math + stu[i].English + stu[i].C)/3;

		
	

	if((fp = fopen("stud","w"))==NULL)
	{
		printf("ERROR :open file failure!");
		exit(0);
	}
	
		fprintf(fp,"%s %d %d %d %d %d",stu[i].name,stu[i].Math,stu[i].English,
				stu[i].C,stu[i].ID,stu[i].avergrade);
	fclose(fp);
	return 0;
}
