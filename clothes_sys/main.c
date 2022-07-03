#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct women
{
	int q[SIZE], front, rear; 
};
struct boy
{
	int qi[SIZE], front1, rear1; 
};


void insert_PQ(struct women *q1,int od)
{
	
	int j=q1->rear;
	while(j>=0 && od < q1->q[j])
	{
		q1->q[j+1]=q1->q[j];
		j--;
	}
	q1->q[j+1]=od;
	q1->rear++;
}
void insert_PQ2(struct boy *q2,int od2)
{
	
	int j=q2->rear1;
	while(j>=0 && od2 < q2->qi[j])
	{
		q2->qi[j+1]=q2->qi[j];
		j--;
	}
	q2->qi[j+1]=od2;
	q2->rear1++;
}

int delete_PQ(struct women *q1)
{
	return (q1->q[(q1->front)++]);
}

int delete_PQ2(struct boy *q2)
{
	return (q2->qi[(q2->front1)++]);
}

void display_PQ(struct women q1)
{	
	printf("Elements in Queue are:\n");
	while(q1.front <= q1.rear)
		{
			printf("%d\n", q1.q[(q1.front)++]);
		}
}
void display_PQ2(struct boy q2)
{	
	printf("Elements in Queue are:\n");
	while(q2.front1 <= q2.rear1)
		{
			printf("%d\n", q2.qi[(q2.front1)++]);
		}
}

int main()

{

	struct women q1;
	struct boy q2;
	q2.front1=0;
	q2.rear1=-1;
	q1.front=0;
	q1.rear=-1;
	int count=0;
	int orderid=0;
	int orderid2=0;
	int count2=0;
	char silk[SIZE],cotton[SIZE],material[SIZE];
	float length;
	int choice;
	for(;;)
	{
		printf("INSERTION PRIORITYQUEUE\n");
		printf("1.for women\n2.boy\n3.dispaching_women\n4.dispaching_boy\n5.display\n6.display2\n for EXIT");
		printf("\nEnter your choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			
			case 1: if(q1.rear == SIZE-1)
				printf("P QUE OVERFLOW\n");
			  else
			  {
			    
			  	printf("Enter the length of the saree\n");
			  	scanf("%f",&length);
			  	printf("enter the material of the saree\n");
			    scanf("%s",material);
			  	
			  	insert_PQ(&q1,orderid);
			  	if(silk||cotton)
			  {	
			      printf("the material is available\n");
			  	orderid++;
			  	printf("the number of orders=%d\n",orderid);
			  
			  }
		
			  else
			  printf("the material is not available");
			  }
			  break;
			  
			  case 2: if(q1.rear == SIZE-1)
				printf("P QUE OVERFLOW\n");
			  else
			  {
			    printf("enter the orders nor:\n");
			    scanf("%d",&orderid2);
			  	printf("Enter the length of the pant\n");
			  	scanf("%f",&length);
			  	printf("enter the material of the mens dress\n");
			    scanf("%s",material);
			  	
			  	insert_PQ2(&q2,orderid2);
			  	if(silk||cotton)
			  {	
			  	count2++;
			  	printf("the number of orders=%d\n",count2);
			  
			  }
			  else
			  continue;
			  }
			  break;
			  case 3: if(q1.front > q1.rear)
			  	    	printf("P Que UNDERFLOW\n");
			  	    else{
			  	    		orderid = delete_PQ(&q1);
			  	    		printf("The deleted element=%d\n", orderid);
			  	    	}
			  	    break;
			  case 4: if(q1.front > q1.rear)
			  	    	printf("P Que UNDERFLOW\n");
			  	    else{
			  	    		orderid2 = delete_PQ2(&q2);
			  	    		printf("The deleted element=%d\n", orderid2);
			  	    	}
			  	    break;
			  
			
			
			  case 5: if(q1.front > q1.rear)
			  	    		printf("QUE is Empty\n");
		       		    else 
			  	    		display_PQ(q1);
			  	    break;
			  case 6: if(q2.front1 > q2.rear1)
			  	    		printf("QUE is Empty\n");
		       		    else 
			  	    		display_PQ2(q2);
			  	    break;
			  	    	
			   default: exit(0);
			   	    
			 	    
		 }
	}
	return 0;
}
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  

