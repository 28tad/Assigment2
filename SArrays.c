#include<stdio.h>

void swapArrays(int a1[],int a2[],int len);
void print2DArr(int *arr2D[],int rows,int columns);

int main(){
	int a1[]={1,2,3,4,5};
	int a2[]={0,0,0,0,0};
	int len=sizeof(a1)/sizeof(int);
	int *arr2D[2]={a1,a2};


	print2DArr(arr2D,2,len);
	swapArrays( a1,a2,len);
	print2DArr(arr2D,2,len);
	return 0;
}

void print2DArr(int *arr2D[],int rows,int columns) {

	for(int y=0;y<rows;y++)
		for(int j=0;j<columns;j++)
			printf("%d",arr2D[y][j]);
	        printf("\n");

        
}

void swapArrays(int x1[],int x2[],int len) {
	int y;
	int temp;

	for(y=0;y<len;y++)
	{
		temp=x1[y];
		x1[y]=x2[y];
		x2[y]=temp;
	}



}


