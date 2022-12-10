#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 


int main() 
{ 
int kol,i,j,unik,dlinastr; 
char m[50]; 
kol=0; 
fflush(stdin); 
printf("Enter the string:\n"); 
gets(m); 
dlinastr=strlen(m); 
for (i=0;i<dlinastr-1;i++)//Считает кол-во неповторяющихся символов 
{ 
for (j=i+1;j<dlinastr;j++) 
{ 
if (m[i]==m[j]) 
kol=kol+1; 
} 
} 
unik=dlinastr-kol; 
printf("%i", unik); 

return 0; 
}
