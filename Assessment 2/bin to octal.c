#include <stdio.h>
#include <math.h>

void main()
{       int n1, n,p=1;
	int dec=0,i=1,j,d;
        int oc=0,dn;
printf("Input the binary number :");
	scanf("%d",&n);
	n1=n;
	for (j=n;j>0;j=j/10)
	{  
          d = j % 10;
            if(i==1)
                  p=p*1;
            else
                 p=p*2;

	   dec=dec+(d*p);
	   i++;
	}
 

     dn=dec;
     i=1;

      for(j=dec;j>0;j=j/8)
       {
        oc=oc+(j % 8)*i;
        i=i*10;
        n=n/8;
       }
   
        printf("\nThe Binary Number : %d\nThe equivalent Octal  Number : %d \n\n",n1,oc);
}
