#include "main.h"                                                                                                                     
                                                                                                                                      
/**                                                                                                                                   
 * cap_string - Capitalizes all words of a string.                                                                                    
 * @str: The string to be capitalized.                                                                                                
 *                                                                                                                                    
 * Return: A pointer to the changed string.                                                                                           
 */                                                                                                                                   
char *cap_string(char *str)                                                                                                           
{                                                                                                                                     
        int index = 0;                                                                                                                
                                                                                                                                      
        while (str[index])                                                                                                            
        {                                                                                                                             
                while (!(str[index] >= 'a' && str[index] <= 'z'))                                                                     
                        index++;                                                                                                      
                                                                                                                                      
                if (str[index - 1] == ' ' ||                                                                                          
                    str[index - 1] == '\t' ||                                                                                         
                    str[index - 1] == '\n' ||                                                                                         
                    str[index - 1] == ',' ||                                                                                          
                    str[index - 1] == ';' ||                                                                                          
                    str[index - 1] == '.' ||                                                                                          
                    str[index - 1] == '!' ||                                                                                          
                    str[index - 1] == '?' ||                                                                                          
                    str[index - 1] == '"' ||                                                                                          
                    str[index - 1] == '(' ||                                                                                          
                    str[index - 1] == ')' ||                                                                                          
                    str[index - 1] == '{' ||                                                                                          
                    str[index - 1] == '}' ||                                                                                          
                    index == 0)                                                                                                       
                        str[index] -= 32;                                                                                             
                                                                                                                                      
                index++;                                                                                                              
        }                                                                                                                             
                                                                                                                                      
        return (str);                                                                                                                 
}

~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
6-cap_string.c[+] [unix] (11:02 29/10/2022)                              27,4-25 Bot
-- INSERT --

