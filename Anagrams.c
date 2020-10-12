#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int A1[26]={0},A2[26]={0};
	printf("Enter the first string : ");
   	scanf("%[^\n]%*c", str1);
   	printf("Enter the second string : ");  
   	scanf("%[^\n]%*c", str2); 
   	
   	for(int i=0;i<strlen(str1);i++)
	   {
   		A1[int(str1[i])-97]++;
	   }
	   
	for(int i=0;i<strlen(str2);i++)
	{
		A2[int(str2[i])-97]++;
	}
	int count=0;
	for(int i=0;i<26;i++)
	{
		if(A1[i]-A2[i]>0)
		count+=A1[i]-A2[i];
		
		else
		count+=A2[i]-A2[i];
	}
	
	printf("The number of characters to be deleted is: %d",count);
}
