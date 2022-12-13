#include "main.h"                                                                                                                                                            
/**                                                                                                                                                                          
 * _islower - function to check the lower char                                                                                                                               
 * @c: is the int that use for argument function                                                                                                                             
 * Return: zero                                                                                                                                                              
 */                                                                                                                                                                          
int _islower(int c)                                                                                                                                                          
{                                                                                                                                                                            
        if (c >= 'a' && c <= 'z')                                                                                                                                            
        {                                                                                                                                                                    
                return (1);                                                                                                                                                  
        }                                                                                                                                                                    
        else                                                                                                                                                                 
                return (0);                                                                                                                                                  
}
