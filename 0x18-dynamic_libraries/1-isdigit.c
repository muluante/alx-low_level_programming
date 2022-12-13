#include "main.h"                                                                                                                                                            
                                                                                                                                                                             
/**                                                                                                                                                                          
  * _isdigit - check wheather a character is a digit or not.                                                                                                                 
  * @c: tested character                                                                                                                                                     
  * Return: zero                                                                                                                                                             
  */                                                                                                                                                                         
int _isdigit(int c)                                                                                                                                                          
{                                                                                                                                                                            
        if ((c >= 48) && (c <= 57))                                                                                                                                          
        {                                                                                                                                                                    
                return (1);                                                                                                                                                  
        }                                                                                                                                                                    
        return (0);                                                                                                                                                          
                                                                                                                                                                             
} 
