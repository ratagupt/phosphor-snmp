#include <stdio.h>
#include <stdlib.h> // For exit() function
int main() {
    char c[1000];
    FILE *fptr;
    if ((fptr = fopen("/var/private", "r")) == NULL) {
        printf("Error! File cannot be opened.");
        // Program exits if the file pointer returns NULL.
        exit(1);
    }

    // reads text until newline is encountered
    int rc = fscanf(fptr, "%[^\n]", c);
    if (rc)
    {
       printf("Data from the file:\n%s", c);
       rc = fclose(fptr);
       if (rc > 0)
       {
	       printf("Error in closing");
       }
    }

    return 0;
}
