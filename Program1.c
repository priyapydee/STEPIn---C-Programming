#include<stdio.h>
#include <string.h>

int main() {
   char string[50] = "my_name_is_edcast_future_skills";
   char * token = strtok(string, "_");
   while( token != NULL ) {
      printf( " %s\n", token ); 
      token = strtok(NULL, "_");
   }
   return 0;
}
