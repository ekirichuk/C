#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
int main() 
{ 
char stroka[15]; 
int i, a[15],s; 
printf("Vvod:"); 
gets(stroka); 
s=0; 

for (i=0;i<strlen(stroka);i++) 
{ 
if ((stroka[i]<='9')&&(stroka[i]>='0'))//проверяет на целостность 
a[i]=1; 
else if (stroka[i]=='.')//проверяет на дробную часть 
a[i]=2; 
else 
a[i]=0; 
} 

for (i=0;i<strlen(stroka);i++) 
{ 
s=s+a[i]; 
} 


if (s==strlen(stroka)) 
{ 
printf("Celoe chislo."); 

} 
if (s==0) 
printf("Ne chislo."); 
i=strlen(stroka); 

for (i=0;i<strlen(stroka);i++) 
{ 
if (a[i]==2) 
{ 
printf("Drobnoe chislo."); 
i=strlen(stroka); 
} 
} 
return 0; 
}
