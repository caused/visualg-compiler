#include <stdio.h>
#include <string.h>

int startsWith(const char *a, const char *b)
{
   if(strncmp(a, b, strlen(b)) == 0) return 1;
   return 0;
}

int main(int argc, char* argv[])
{
    char *fileName = "teste.txt";
    FILE* file = fopen(fileName, "r"); 
    char line[256];
	char *lexemas; 
	
    while (fgets(line, sizeof(line), file)) {
    	if(!startsWith(line, "//")) { 
    		 lexemas = strtok( line, " ,\n\t" );
		     while( lexemas != NULL ){
			        printf( "%s\n", lexemas );
			        lexemas = strtok( NULL, " ,\n\t" );
			 }
			 
			 
		}
        
    }

    fclose(file);

    return 0;
}
