#include "main.h"                                                                                                                                                            
#include <stdio.h>                                                                                                                                                           
/**                                                                                                                                                                          
 * _strstr - locate substrings.                                                                                                                                              
 * @haystack: Array to be searched                                                                                                                                           
 * @needle: Target string                                                                                                                                                    
 * Return: nothing to return                                                                                                                                                 
 */                                                                                                                                                                          
char *_strstr(char *haystack, char *needle)                                                                                                                                  
{                                                                                                                                                                            
        int i, j;                                                                                                                                                            
                                                                                                                                                                             
        if (needle[0] == '\0')                                                                                                                                               
                return (haystack);                                                                                                                                           
                                                                                                                                                                             
        for (i = 0; haystack[i]; i++)                                                                                                                                        
        {                                                                                                                                                                    
                for (j = 0; needle[j]; j++)                                                                                                                                  
                {                                                                                                                                                            
                        if (haystack[i + j] != needle[j])                                                                                                                    
                                break;                                                                                                                                       
                                                                                                                                                                             
                        if (needle[i + j] == '\0')                                                                                                                           
                                return (haystack + i);                                                                                                                       
                }                                                                                                                                                            
        }                                                                                                                                                                    
                                                                                                                                                                             
        return ('\0');                                                                                                                                                       
} 
