#include<stdio.h>
#include<string.h>
/**
void rever_str(const char *s1,char *s2)
{
	int len=0;
	while(*s1!=0)
	{
		++s1;
		++len;
	}
	while(len>=0)
	{
		*s2++=*(--s1);
		len--;
	}
    
}

int check_equal(char *s1)
{
	int a=0;
	int b=strlen(s1)-1;
	while (b>0)
	{
		if(s1[a++]!=s1[b--])
		{
			return 0;
		}
	}
	return 1;
	return 0;	
}
**/

/**
void replace(char *s,char c1,char c2)
{
	for(int i=0;s[i];i++)
	{
		if(s[i]==c1)
		{
			s[i]=c2;
		}
	}
}
**/

/**
#include"realstr.h"
void removeDup(char *str1)
{
int i=0;
while(str1[i]!='\0')
{
removeall(str1,str1[i],i+1);
i++;
}
}
void removeall(char *str1,const char toremove, int index)
{
int i;
while(str1[index]!='\0')
{
if(str1[index]==toremove)
{
i=index;
while(str1[i]!='\0')
{
str1[i]=str1[i+1];
i++;
}
}
else
index++;
}
}
**/

/**
void mystrcat(char *d,const char *s)
{
while(*d)
{
d++;
}
while(*d++=*s++)
;
}
char* mystrncat(char *d1,const char *s1,int n)
{
int i;
for(i=0;i<n;i++)
{
mystrcat(d1,s1);
}
return d1;
}
**/




/**
void count(char str[100])
{
    int flag=0;
    char c;
    for(int i=0;i<=strlen(str);i++)
    {
        if(i==0)
            c=' ';
        else if(str[i-1]!=' ') // This is used to omit all spaces while counting characters
            c= str[i-1];
        else
            goto loop;
        for(int j=0;j<strlen(str);j++)
        {   
            if(c==str[j]) // Initiates count for a certain character
                {
                    flag++;
                    str[j]=' '; // Converts all repeated character to space so that they are not counted twice
                }
        }
        printf("%c occurs %d times\n",c,flag);
        loop:
        flag=0;

    }
}
**/


















	
 	