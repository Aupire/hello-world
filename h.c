#include<unistd.h>

int main ()
{
	int a = 0;

	a = ++2;
	 write(1, &a, 1);
}


