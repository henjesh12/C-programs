#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node*link;
	
};
typedef struct node*NODE;
NODE getnode()
{
	NODE temp;
	temp=(NODE)malloc(sizeof(struct node));
	if(temp==NULL)
	{
	
	printf("\n memory is insufficient\n");
	 return 0;
}
return temp;
}
NODE insert_front(NODE first,int item)
{
	NODE temp;
	temp=getnode();
	temp->info=item;
	temp->link=first;
	return temp;
}
NODE insert_rear(NODE first ,int item)
{
	NODE temp;
	NODE cur;
	temp=getnode();
	temp->link=NULL;
	if(first==NULL)
	printf("listis empty");
	cur=first;

	while(cur->link!=NULL)
	{
	
		cur=cur->link;
		
	}
	temp->info=item;
	cur->link=temp;
	return first;
	
	
}
NODE delete_front(NODE first)
{
	NODE cur;
	if(first==NULL)
	{
		printf("list is empty");
		return;
		
	}
	cur=first;
	first=first->link;
	printf("the deleted item=%d\n",cur->info);
	free(cur);
	
}
NODE delete_rear(NODE first)
{
	NODE cur ,prev;
	if(first=NULL)
	{
		printf("list is empty");
		return;
	}
	if(first->link=NULL)
	{
		printf("deleted item=%d",cur->info);
		free(first);
		
	}
	cur=first;
	prev=NULL;
	while(cur->link!=NULL)
	{
		prev=cur;
		cur=cur->link;
	}
	prev->link=NULL;
	free(cur);
	
	
	return first;
}
void display(NODE first)
{
	NODE cur;
	if(first==NULL)
	{
		printf("list ids empty");
		return;
		
	}
	cur=first;
	while(cur!=NULL)
	{
		printf("%d",cur->info);
        cur=cur->link;
				
	}
}
int main()
{
	int ch,i,n,item;
	NODE first=NULL;
	while(1)
	{
		printf("\n 1.create SLL\n 2.instert front\n 4.insert_rear\n 5.delete front\n 6.delete rear\n 3.display\n 7.exit");
		printf("enter the choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : printf("\n enter the no of nodes");
			         scanf("%d",&n);
			         printf("enter the data");
			         for(i=0;i<n;i++)
					 {
			         	
					 
			         scanf("%d",&item);
			         first=insert_rear(first,item);
			     }
			     break;
			 case  2 : printf("\n enter the data") ;
			           scanf("%d",&item);
					    first=insert_front( first,  item);
					   break;
		     case 3 : display(first);
		              break;
		      case 4: printf("enter the data");
			          scanf("%d",&item) ;
					      first=insert_rear(first,item)  ; 
					      break;
			case 5 : first=delete_front(first);
			break;
			case 6 : first=delete_rear(first);
			break;		      
              case 7 :_Exit(0);
			  break;
		}
					      
		}
			}
