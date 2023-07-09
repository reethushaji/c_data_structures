#include <stdio.h>
int r, c, a[50][50], b[50][50],  i, j,ch;
void add()
	{
			int i,j,sum[50][50];
		
  			for (i = 0; i < r; ++i)
   			for (j = 0; j < c; ++j) 
			{
      		sum[i][j] = a[i][j] + b[i][j];
    		}

  			printf("\nSum of two matrices: \n");
  			for (i = 0; i < r; ++i)
    			for (j = 0; j < c; ++j) 
				{
     			printf("%d   ", sum[i][j]);
      			if (j == c - 1) 
				{
       			 printf("\n\n");
      			}
    			}
    	}
void sub()
	{
			int i,j,dif[50][50];
  			for (i = 0; i < r; ++i)
   			for (j = 0; j < c; ++j) 
			{
      		dif[i][j] = a[i][j] - b[i][j];
    		}

  			printf("\nDifference of two matrices: \n");
  			for (i = 0; i < r; ++i)
    			for (j = 0; j < c; ++j) 
				{
     			printf("%d   ", dif[i][j]);
      			if (j == c - 1) 
				{
       			 printf("\n\n");
      			}
    			}
    	}

void mul()
{
			int i,j,prod[50][50];
		for (i = 0; i < r; ++i)
   			for (j = 0; j < c; ++j) 
			{
      		prod[i][j] = a[i][j] * b[i][j];
    		}

  			printf("\nProduct of two matrices: \n");
  			for (i = 0; i < r; ++i)
    			for (j = 0; j < c; ++j) 
				{
     			printf("%d   ", prod[i][j]);
      			if (j == c - 1) 
				{
       			 printf("\n\n");
      			}
    			}
	
}

void trans()
{
	int i,j,t1[50][50],t2[50][50];
	 for (i = 0;i < r;i++)
      for (j = 0;j <c;j++)
         t1[j][i] = a[i][j];
   printf("Transpose of the matrix 1:\n");
   for (i = 0; i< r; i++) {
      for (j = 0; j < c; j++)
         printf("%d\t", t1[i][j]);
      printf("\n");
  
       for (i = 0;i < r;i++)
      for (j = 0; j <c; j++)
         t2[j][i] = b[i][j];
   printf("Transpose of the matrix 2:\n");
   for (i = 0; i< r; i++) {
      for (j = 0; j < c; j++)
         printf("%d\t", t2[i][j]);
      printf("\n");
	
}
}
}






int inp(){
	  printf("Enter the number of rows : ");
  scanf("%d", &r);
  printf("Enter the number of columns : ");
  scanf("%d", &c);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
}

int menu() {
  


	printf("1)Addition   2)Subtraction 3)Multiplication 4)Transpose 5)Determinant\n Enter your choice:");
	scanf("%d",&ch);
	return ch;
}
	
	
int matrix(){
	int ch;
	for(ch=menu();ch!=5;ch=menu()){
	
	switch(ch){
	case 1:
		add();
		break;
    case 2:
    	sub();
    	break;
    case 3:
    	mul();
    	break;
    case 4:
    	trans();
    	break;
    
    default:
    	printf("invalid choice!");
    	
}
}
}
int main()
{
	inp();
	matrix();
	return 0;
}






