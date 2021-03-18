#include <stdio.h>

int main() {
   
   int start=0;
   int end,size,n,no;
   scanf("%d",&n);
   size = 2 * n - 1;
   int arr1[size][size],i,j;
   end =size -1;
   //printf("\n%d\t%d",size,end);
   no=n;
   while(no!=0)
   {
  for(i=start;i<=end;i++)
  {
      for(j=start;j<=end;j++)
      {
      	//printf("%d\t",no);
      	if( i == start || i == end
		  || j == start || j == end)
		  {
		  
	      arr1[i][j] = no;
	     // printf("%d\t",arr1[i][j]);
	  }
      }
     printf("\n\n");
  } 
  ++start;
  --no;
  --end;
}
 
start=0;
end=size-1;
  for(i=start;i<=end;i++)
  {
      printf("\n");
      for(j=start;j<=end;j++)
           printf("%d\t",arr1[i][j]);
  }
 printf("\n\n");

    return 0;
}
