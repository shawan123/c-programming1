#include "stdio.h";
struct node
{
int v;
struct node *next;
};

 int main()
{
	struct node *top,*temp,*temp1;
	int x,ans,i;

	do
	{
		printf("1: Push a node to stack\n");
		printf("2: Pop a node from stack\n");
		printf("3: Display stack\n");
		printf(" Enter your choice\n");
		scanf("%d",&i);

		switch(i)
		{
		case 1:
			temp=(struct node*)malloc(sizeof(struct node));
			printf("enter the value\n");
		    scanf("%d",&x);
				temp->v=x;
				temp->next=NULL;
				if(top->next==NULL)
				  {

				    top->next=temp;

				  }
				else

				if(top->v==NULL)
				  {
					top=temp;

				  }
				else

				{
					temp1=top;
					while(temp1->next!=NULL)
						{
						temp1=temp1->next;
						}
					temp1->next=temp;
				}
					break;

		case 2:
			if(top->next==NULL)
			{
				free(top);
			}
			else
			{
				temp=top;
				top=top->next;
				free(temp);
			}
			break;
		case 3:
			temp1=top;
			while(temp1->next!=NULL)
			{
				printf("%d\n",temp1->v);
					temp1=temp1->next;
			}
			printf("%d\n",temp1->v);
			break;
		}
		printf("enter  1 to continue\n");
		scanf("%d",&ans);

	}
	while(ans==1);
		return 0;
}
