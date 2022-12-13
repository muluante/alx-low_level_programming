#include "main.h"                                                                                                                                                            
                                                                                                                                                                             
/**                                                                                                                                                                          
 * _strcat - function for strcat                                                                                                                                             
 * @dest: destinatio parameter                                                                                                                                               
 * @src: source parameter                                                                                                                                                    
 * Return: character                                                                                                                                                         
 */                                                                                                                                                                          
char *_strcat(char *dest, char *src)                                                                                                                                         
{                                                                                                                                                                            
        int a = 0, b = 0;                                                                                                                                                    
                                                                                                                                                                             
        while (dest[a++])                                                                                                                                                    
                b++;                                                                                                                                                         
                                                                                                                                                                             
        for (a = 0; src[a]; a++)                                                                                                                                             
                dest[b++] = src[a];                                                                                                                                          
                                                                                                                                                                             
        return (dest);                                                                                                                                                       
} 
