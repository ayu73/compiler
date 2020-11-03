 #include <stdio.h>
 #include <stdlib.h>
 #include <ctype.h>

 int main(int argc, char **argv) {
   if (argc != 2) {
	   fprintf(stderr, "引数の個数が正しくありません\n");
	   return 1;
   }

   	argv[1] = fopen("sample.txt", "r");
   	char *p = argv[1];
 
    while (*p) {
	    if (isspace(*p)) {
          	p++;
          	continue;
	    }
 
	    if (*p == '+') {
		    p++;
		    printf("PLUS ");
		    continue;
	    }
 
	    if (*p == '-') {
		    p++;
		    printf("MINUS ");
		    continue;
	    }
 
	    if (*p == '*') {
		    p++;
		    printf("MUL ");
		    continue;
	    }
 
	    if (*p == '/') {
		    p++;
		    printf("DIV ");
		    continue;
	    }
 
	    if (isdigit(*p)) {
		    p++;
		    printf("NUMBER ");
		    continue;
	    }

	    fprintf(stderr, "予期しない文字です: '%c'\n", *p);
	    return 1;
    }
 
    printf("EOF\n");
    return 0;
 }

