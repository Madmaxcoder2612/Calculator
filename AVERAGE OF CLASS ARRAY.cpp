#include<stdio.h>
int main()
{
int n;
printf("Enter Number Of Students:");
scanf("%d",&n);
printf("\n Enter %d The Marks of students : ",n);
int marks[n];
for(int i=0;i<n;i++)
{
scanf("%d",&marks[i]);
}
int sum=0;
for (int i=0;i<n;i++);
{
sum=sum+marks[i];
}
float avg=(float)sum/n;
printf("Average MArks of the CLass is %f", avg);
}

