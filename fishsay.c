#include <stdio.h>

int fishy(){
	printf("<॰)))><\n");
        }

int main(int argc, char *argv[]){
	if(argc > 6){
		printf("Please keep this below 6 words\n");
		return 1;
		}
	if(argc < 2){
		printf("Usage: fishysay \"[user input]\"\n");
		return 1;
		}
	printf("hlughlughlughlug <[");
	for(int foo=1; foo < argc;){
		printf("%s", argv[foo]);
		foo++;
	};
	printf("]>\n");
	for(int bar=0; bar < argc;){
		printf("hlughlughlughlug ");
		bar++;
		}
	printf("༄  ");
	fishy();
	
}



