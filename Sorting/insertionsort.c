/**
 *
 * @author Ravi
 */
 #include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	int n=argc-1,i,j,key;
	int a[n];
	printf("Before sorting:\n");
	for(i=1;i<argc;i++)
	{
		a[i-1]=atoi(argv[i]);
		printf("%d ",a[i-1] );
	}
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0&& key<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	printf("\nAfter sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i] );
	}
	return 0;
}