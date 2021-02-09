#include<iostream>
#include<string.h>
using namespace std;

bool is_palindrome(const char*);

bool is_palindrome(const char str[]) 
{ 
    int start = 0; 
    int end = strlen(str) - 1;
	
	while (end > start) 
    { 
        if (toupper(str[start++]) != toupper(str[end--])) 
        { 
            cout << str << " is not a palindrome" << endl; //Please uncomment this line to get the STD:OUT
			return false; 
        } 
    } 
    cout << str << " is a palindrome" << endl;            //Please uncomment this line to get the STD:OUT
	return true; 
}

int main() 
{ 
    is_palindrome("1881"); 
    is_palindrome("Dad"); 
    is_palindrome("Step on no pets"); 
    return 0; 
}
