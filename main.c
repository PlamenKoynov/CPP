#include<stdio.h>
#include<stdlib.h>


FILE * fp;

int main(int argc, char *argv[])
{	
	char ch;
	char z=0;
			
	if(argc != 3)
	{
            printf("Error: too many arguments!\n");
            exit(1);
    }
	if((fp = fopen(argv[1], "rt"))== NULL)
	{
		printf("Error: can't open the file!\n");
		exit(1);
	}
	z = *argv[2];
	while((ch=fgetc(fp))!=EOF)
	{
                              if(ch==z)
			                  {
				                       printf("Znakat '%c' s poziciq %d\n", z, ftell(fp));
				                       exit(1);
                              }
	}
	printf("Znakat '%c' ne se sydyrja vyv faila\n", z);
    fclose (fp);
	system("pause");
	return 0;
}
