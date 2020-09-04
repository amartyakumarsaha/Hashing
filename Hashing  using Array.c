#include<stdio.h>
#define SIZE 5
void insertion();
int searchData();
void delete();
void print();
int array[SIZE];
int main()
{
	int i,data;
	for(i=0;i<SIZE;i++)
	{
			array[i]=-1;		// STORING -1 IN ALL THE INDEX. -1 MEANS NO VALUE IS PRESENT AT THAT INDEX.
	}
	for(i=0;i<SIZE;i++)
	{
		int data;
	printf("Enter the value you want to insert :-");
	scanf("%d",&data);
	insertion(data);
	}
	printf("Elements in the hash table are :-");
	print(array,i);
	printf("\nEnter the value you want to search:-");
	int value;
	scanf("%d",&value);
	if(searchData(value)==1)
	{
		printf("Data is present");
	}
	else
	{
		printf("Data is not present");
	}
	printf("\nEnter the data you want to delete :-");
	int item;
	scanf("%d",&item);
	delete(item);
	
	printf("Elements in the hash table after deletion are :-");

	print(array,i);
	return 0;
}
void insertion(int data)
{
	int key=data%SIZE;
	int index=key;
	
	while(array[index]!=-1)
	{
		index=(index+1)%SIZE;
		
		if(index==key)
			printf("\n hash table is full");
	}
	array[index]=data;
	
	
}
int searchData(int data)
{
	int key=data%SIZE;
	int index=key;
	
	while(array[index]!=data)
	{
		index=(index+1)%SIZE;
		
		if(index==key)
			return 0;
	}
	return 1;
}
void delete(int data)
{
	int key=data%SIZE;
	int index=key;
	
	while(array[index]!=data)
	{
		index=(index+1)%SIZE;
		
		if(index==key)
			printf("Data you want to delete in not present here");
	}
	array[index]=-1;
}
void print(int *array,int i )
{
	
	for(i=0;i<SIZE;i++)
	{
		printf("%d\t",array[i]);
	}
}
