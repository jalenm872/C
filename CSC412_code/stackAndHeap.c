//	This code was written to illustrate mechanisms of
//	the runtime environment, including things that
//	happen in the context of some programming errors.
//	It is therefore *definitely* not meant to be used as
//	an example of good, or event decent C programming.
//
//	Jean-Yves Hervé, CSC412, Fall 2019, rev. Fall 2022
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int* anotherFunc(int a, int* v, char* c);
int myFunc(int a, int b);

#define VERSION_1	1
#define VERSION_2	2
#define VERSION	VERSION_1

int n =4;

int main(int argc, char* argv[])
{
	int a = 5, b = 7;

	b = myFunc(b, a+b);

	char s[] = "CSC412";
	printf("length of s: %ld.  Size of s: %ld\n", strlen(s), sizeof(s));
	char* s2 = (char*) malloc((strlen(s)+1)*sizeof(char));

	//							   6  + 1
	//					\_______________________________/
	//								void*
	strcpy(s2, s);
	//	  dest source
	printf("s2 -->|%s|<--\n", s2);

	s[4] = '\0'; /* some comment  */
	s[4] = (char) 0;
	s[4] = 0x00;
	strcpy(s2, s);
	//	  dest source
	printf("after overwrite, length of s: %ld.  Size of s: %ld\n", strlen(s), sizeof(s));
	printf("s2 -->|%s|<--\n", s2);

	s[4] = 'z';
	//	equivalent to
//	s[4] = (char) 90;
//	s[4] = 0x5A;

	s[6] = '*';
//	s[6] = 0x2A;

	printf("after overwrite, length of s: %ld.  Size of s: %ld\n", strlen(s), sizeof(s));
 	strcpy(s2, s);
	//	  dest source
	printf("s2 -->|%s|<--\n", s2);



//	int* c = (int*) malloc(3*sizeof(int));
	int* c = (int*) calloc(3, sizeof(int));
	//				\____________________/
	//						void*
	short* z = (short*) c;	//	short: 2 bytes
	double* y = (double*) c;	//	double: 8 bytes
	
	//	images;  color pixel 4 bytes  RGBα

	c[0] = 8; c[1] = -12; c[2] = 4;
	int* d = anotherFunc(a, c+1, s);

	b = myFunc(b, a+b);

	d = anotherFunc(*c, c, (char*) c);

	printf("d[0] + d[1] = \n", (d[0] + d[1]));
	printf("Bye!\n");
	return 0;
}

int myFunc(int a, int b)
{
	static int n = 0;
	n++;

	int c = a + b;
	return 2*c;
}

int* anotherFunc(int a, int* u, char* c) {

	int v[] = {0, 0};
	
	 int* w = (int*) malloc(6*sizeof(int));
	 for (int i=0; i<6; i++)
	 {
		w[i] = (i+1)*(i+1);
	 }

	v[0] = myFunc(c[2], a);
	v[1] = u[0] + u[1] + c[0] + w[1] + w[5];

	return v;	//	stale pointer
}

