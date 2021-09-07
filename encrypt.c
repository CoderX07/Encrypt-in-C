// Calls C libraries
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // User Inputs and Computer Outputs
    string s = get_string("Message To Be Encrypted: ");
    printf("Encrypted Message: ");
    
    // Determines String Length, and Encrypts Each Char (By Adding 10 to ASCII) Until String Is Done
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i] + 10);
    }
    
    // Cursor New Line
    printf("\n");
}