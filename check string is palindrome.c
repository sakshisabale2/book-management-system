#include <stdio.h>
#include <string.h>

int isPalindrome(char *);

int main() {
	int a=0;
int b=11;
a=++b;
printf("\n%d",a);
printf("\n%d",b);

	
    char str[10] = "srty";
    int f=isPalindrome(str);
    if(f==1)
        printf("\nString is a palindrome.\n");
    else
        printf("\nString is not a palindrome.\n");

    return 0;
}

int isPalindrome(char *ch) 
{
    int start=0;
    int end=strlen(ch)-1;

    while(start<end) 
    {
        if (ch[start]!=ch[end]) 
	   {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

