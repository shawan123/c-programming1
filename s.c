#include "stdio.h"
struct student
{
	char name[50];
	int roll;
	float per;
};
int main()
{
	struct student s[5];

	int n,i,j,k,ch;

	float a;

do
{

	printf("enter your choice\n");
	scanf("%d",&n);
	switch(n)
	{
	case 1: printf("enter details\n");
	           for(i=0;i<5;i++)
	            {
		           scanf("%s",s[i].name);
		           scanf("%d",&s[i].roll);
		           scanf("%f",&s[i].per);
	            }
	           for(i=0;i<5;i++)
	            {
		           printf("%s\n",s[i].name);
		           printf("%d\n",s[i].roll);
		           printf("%f\n",s[i].per);
	            }
	         break;

	case 2:    for(i=0;i<4;i++)
	        {
		         for(j=0;j<4-i;j++)
		            {
			            if(s[j].per<s[j+1].per)
			               {
				              a=s[j+1].per;
				              s[j+1].per=s[j].per;
				              s[j].per=a;
			                }
		             }
	        }
		         printf("sorted percentage is:\n");
		             for(i=0;i<5;i++)
		                {
			               printf("%f\n",s[i].per);
		                }

	          break;

	case 3:      printf("enter roll no to be searched\n");
	             scanf("%d",&k);
	             for(i=0;i<=4;i++)
	                {
		                if(s[i].roll==k)
		                   {
			                  printf("%s\n",s[i].name);
			                  printf("%d\n",s[i].roll);
			                  printf("%f\n",s[i].per);
		                   }
	                }

	           break;
	}
	printf("enter 1 to continue\n");
	scanf("%d",&ch);
}while(ch==1);
}
