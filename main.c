#include <stdio.h>
#include <string.h>
 
#include "message.h"

int main (int argc, char *argv[])
{
    int i, n;

    typedef struct {
        char* arg_str;
        double arg_value;
    } Argument_t;

    Argument_t argument[10];
    
    //Initiliase argument structure
    for(i = 0; i < 10; i++)
    {
        argument[i].arg_str = "Init";
        argument[i].arg_value = 10;
    }
        
    argument[0].arg_str = "M11";
    argument[0].arg_value = 3.1;
    
    argument[1].arg_str = "M12";
    argument[1].arg_value = 3.2;    
    
    welcome_message();

    printf("Number of arguments  = %d\n", argc);

    printf("Arguments = ");   
    //print all arguments
    for(i = 0; i < argc; i++)
    {
        printf("%s ", argv[i]);
    }
    
    printf("\n");
    

    //compare each string to each argument
    for(i = 0; i < argc; i++)
    {
        for(n = 0; n < 10; n++)
        {
            if (strcmp(argument[n].arg_str, argv[i]) == 0)
            {
                printf("Argument %s is equal to value: %f\n", argv[i], argument[n].arg_value);
            }
        }
   }
}
