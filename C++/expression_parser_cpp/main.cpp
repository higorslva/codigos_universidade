/*
Expression parser

C++ code, project developed with wxDev-C++

Author: Jos de Jong, 2007
*/

// declarations
#include <cstdlib>
#include <cstdio>

#include "parser.h"


using namespace std;

int main(int argc, char *argv[]){
    char expr[255];
    char err[255];
    double res = 0;

    // create a parser object
    Parser prs;

    puts("Enter an expression an press Enter to calculate the result.");
    puts("Enter an empty expression to quit.");
    puts("");

    do{
        // request an expression
        printf("> ");
        fgets(expr, sizeof expr, stdin);
	     // if (fgets(expr, sizeof expr, stdin) ! = NULL {
          if (strcmp(expr, "") != 0){
              try{
                  // evaluate the expression
                  char* result;
                  result = prs.parse(expr);
                  printf("\t%s\n", result);
              }catch (...){
                  printf("\tError: Unknown error occured in parser\n");
              }
          }
      //  }
      } while (strcmp(expr, "") != 0);
      return EXIT_SUCCESS;


}
