#include<stdio.h>
void generate_upward_pyramid(int n){
	int i,j;
    for(int i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void generate_inverted_pyramid(int n){
	int i,j;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
void generate_mirr_upp_pyramid(int n){
	int i,j;
	for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(j>n-i)
			{
				printf("*");
			}
			else{
			printf(" ");
		}
        }
        printf("\n");
    }
}
void generate_mirr_inverted_pyramid(int n){
	int i,j,k,m;
	m=n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=m;k++)
		{
			printf("*");
		}
		m--;
		printf("\n");
	}
}
void generate_hollow_square(int n){
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n||j==1||j==n)
			{
				printf("*");
		    }
		    else{
		    	printf(" ");
			}
		}
		printf("\n");
	}
}
void generate_diagonal_square(int n){
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n||j==1||j==n||i>1&&i<n&&(j==n-i+1||j==i))
			{
				printf("*");
			}
		    else{
		    	printf(" ");
			}
		}
		printf("\n");
	}
}
void generate_eqiv_upward_triangle(int n){
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
			}
		for(k=1;k<2*i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
void generate_eqiv_inverted_triangle(int n){
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<i-1;j++)
		{
			printf(" ");
			}
		for(k=1;k<2*n-2*i+2;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main(){
	int n;
	printf("%s","Enter the num of rows you need in a pyramid:");
	scanf("%d",&n);
	generate_upward_pyramid(n);
	printf("_______________________\n");
	generate_inverted_pyramid(n);
	printf("_______________________\n");
	generate_mirr_upp_pyramid(n);
	printf("_______________________\n");
	generate_mirr_inverted_pyramid(n);
	printf("_________________________\n");
	generate_hollow_square(n);
	printf("_________________________\n");
	generate_diagonal_square(n);
	printf("_________________________\n");
	generate_eqiv_upward_triangle(n);
	printf("_________________________\n");
	generate_eqiv_inverted_triangle(n);
    return 0;
}


