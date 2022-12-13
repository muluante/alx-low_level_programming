#include "main.h"                                                                                                                                                            
                                                                                                                                                                             
/**                                                                                                                                                                          
 * _atoi - change string to an integer                                                                                                                                       
 * @s: pointer a character                                                                                                                                                   
 * Return: nothing                                                                                                                                                           
 */                                                                                                                                                                          
                                                                                                                                                                             
int _atoi(char *s)                                                                                                                                                           
{                                                                                                                                                                            
        int a;                                                                                                                                                               
        unsigned int b;                                                                                                                                                      
        char *temp;                                                                                                                                                          
                                                                                                                                                                             
        temp = s;                                                                                                                                                            
        b = 0;                                                                                                                                                               
        a = 1;                                                                                                                                                               
                                                                                                                                                                             
        while (*temp != '\0' && (*temp < '0' || *temp > '9'))                                                                                                                
        {                                                                                                                                                                    
                if (*temp == '-')                                                                                                                                            
                        a *= -1;                                                                                                                                             
                temp++;                                                                                                                                                      
        }                                                                                                                                                                    
        if (*temp != '\0')                                                                                                                                                   
        {                                                                                                                                                                    
                do {                                                                                                                                                         
                        b = b * 10 + (*temp - '0');                                                                                                                          
                        temp++;                                                                                                                                              
                } while (*temp >= '0' && *temp <= '9');                                                                                                                      
        }                                                                                                                                                                    
        return (b * a);                                                                                                                                                      
} 
