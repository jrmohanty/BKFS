#include <stdio.h> 
//#include "cassert"

//Implementation of strlen()
int my_strlen(const char *lptr){
	//assert (lptr);
	if(lptr == '\0') //For NULL 
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

//Return a boolean that is true if the word or phrase is a palindrome and false otherwise

bool is_palindrome(char str[]) 
{ 
    int start = 0; 
    int end = my_strlen(str) - 1;
	
	while (end > start) 
    { 
        if (my_toupper(str[start++]) != my_toupper(str[end--])) 
        { 
            //printf("%s is Not Palindrome\n", str);
			return false; 
        } 
    } 
    //printf("%s is palindrome\n", str);
	return true; 
}

int main() 
{ 
    is_palindrome("1881"); 
    is_palindrome("Dad"); 
    is_palindrome("Step on no pets"); 
    return 0; 
}   
