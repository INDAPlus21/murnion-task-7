              // mmm ... donuts
         %:include<stdio.h>/*!ioccc*/
    %:include<stdlib.h>/*#include<std.h>*/
 int c(const void *a, const void *b)//plåg:
<%const int *ia = (const int *)a;//casting??\
types const //                 <constchar[0]a;
const int *ib=                 (const int *)b;
return *ib-*ia                 ;//mnch//eax??\
int 0x80 mov 1                 ,eax int 0x80//
%> int main()                  <% int a,aa,ab;
ab=0;scanf/**/                 ("%d", &a);/**/
aa=(a%2== 0) ?                 a/2 : (a+1) /2;
/*printf("%d\n                 ",aa);int y=a*/
int*b = malloc                 (a*sizeof(int));
for(int i=0;i<a;i++)  <%scanf("%d", &b[i]); %>
   qsort((void *)b, a, sizeof(int), c); for 
     (int i=0;i<aa; i++) <%ab += b[i]; %>
            printf("%d\n",ab);%>