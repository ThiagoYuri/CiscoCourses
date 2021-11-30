#include <stdio.h>

int main()
{
    //int 60seconds = 60; - Error of compilation,variable  name is invalid
    //int 60minutes = 60;- Error of compilation,variable  name is invalid
    //printf("One hour is %d seconds\n", 60seconds * 60minutes); - Error of compilation,variable  name is invalid

	int seconds = 60;
	int minutes = 60;
	printf("One hour is %d seconds\n", seconds * minutes);
	return 0;
}
