#include "main.h"                                                                                                                                                            
                                                                                                                                                                             
/**                                                                                                                                                                          
 * _puts - a function for puts                                                                                                                                               
 * @str: printed string                                                                                                                                                      
 * Return: zero                                                                                                                                                              
 */                                                                                                                                                                          
                                                                                                                                                                             
void _puts(char *str)                                                                                                                                                        
{                                                                                                                                                                            
        int length;                                                                                                                                                          
                                                                                                                                                                             
        for (length = 0; str[length] != '\0'; length++)                                                                                                                      
        {                                                                                                                                                                    
                _putchar(str[length]);                                                                                                                                       
        }                                                                                                                                                                    
                                                                                                                                                                             
        _putchar('\n');                                                                                                                                                      
                                                                                                                                                                             
}
