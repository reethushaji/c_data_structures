#include<stdio.h>
#define N 5
int insert(int a[N],int n) {
	if(n+1 == N) {
		printf("Array is FULL");
	}
	else {
		n = n + 1;
		printf("Enter a number");
		scanf("%d",&a[n]);
	}
	return n;
}

void disp(int a[N],int n){
	int i;
	if(n == -1){
		printf("Array is EMPTY");
	}
	else {
		for(i=0;i <= n;i++){
			printf("%d\t",a[i]);
		}
	}
}
int search(int a[N],int n, int k){
	int i;
	for(i=n;i >= 0 && a[i]!=k;i--)
	;
	return i;
}
int delete(int a[N],int n, int pos){
	int i;
	for(i = pos;i<n;i++) {
		a[i] = a[i+1];
	}
	n = n - 1;
	return n;
}
int menu() {
	int ch;
	printf("\n1. insert\n2. display\n3. search\n4. delete\n5. exit\n  Enter your choice");
	scanf("%d",&ch);
	return ch;
}
int processArray(){
	int ch;
	int a[N];
	int n = -1,pos;
	for(ch = menu();ch != 5;ch = menu()){
		switch(ch){
			case 1:
				n = insert(a,n);
				break;
			case 2:
				disp(a,n);
				break;
			case 3:
				if(n>=0){
					printf("Enter an element");
					scanf("%d",&ch);
					pos = search(a,n,ch);
					if(pos == -1)
						printf("%d Not Found",ch);
					else
						printf("%d is present at %d",ch,pos);
				}
				else {
					printf("Array is empty");
				}
				break;
			case 4:
				if(n>=0){
					printf("Enter the element to be deleted");
					scanf("%d",&ch);
					pos = search(a,n,ch);
					if(pos == -1)
						printf("%d Not Found",ch);
					else
						n = delete(a,n,pos);
				}
				else {
					printf("Array is empty");
				}
				break;	
			default:
				printf("WRONG CHOICE");
				break;	
		}
	}
}
int main() {
	processArray();
	return 0;
}
