#include <stdio.h>
#include <stdbool.h>
//#include "cassert"  		// For generating Core Dump, but not supporting in online-GDB

//Implementation of strlen()
int my_strlen(const char *lptr){
	//assert (lptr);	// For generating Core Dump, but not supporting in online-GDB
	if(lptr == '\0')	// Null pointer exception handler
	    return 0;
	int length=0; 
	while(*lptr++)
	{
		length++;
	}
	return length;
}

//Implementation of toupper()
int my_toupper(int ch)
{
        if(ch >= 'a' && ch <= 'z')
                return ('A' + ch - 'a');
        else
                return ch;
}

bool is_palindrome(char str[]) 
{ 
    int start = 0; 
    int end = my_strlen(str) - 1;
	
	while (end > start) 
    { 
        if (my_toupper(str[start++]) != my_toupper(str[end--])) 
        { 
            //printf("%s is Not Palindrome\n", str);	//Before execution uncomment this line
			return false; 
        } 
    } 
    //printf("%s is palindrome\n", str);		////Before execution uncomment this line
	return true; 
} 

int main() 
{ 
    is_palindrome("1881"); 
    is_palindrome("Dad"); 
    is_palindrome("Step on no pets"); 
    return 0; 
}

