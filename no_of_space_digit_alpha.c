#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char a[50];
    int i,n,space=0,digit=0,con=0,vowel=0;
    
    printf("Enter string");
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]==' ')
        space++;
        
        else if(isdigit(a[i]))
        digit++;
        
        else if(a[i]=='a'|| a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
        vowel++;
        
        else
        con++;
    }
    
    printf("Number of spaces is %d \n",space);
    printf("Number of digits is %d \n",digit);
    printf("Number of consonants is %d \n",con);
    printf("Number of vowels is %d \n",vowel);
    
    return 0;
}