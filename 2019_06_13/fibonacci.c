#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/types.h>

int fibonacci(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  else return fibonacci(n - 1) + fibonacci(n - 2);
}

int guardarEntero(char *fn, int n){
	FILE *fp;
	fp = fopen(fn,"w");
	fprintf(fp, "%d",n);
	fclose(fp);
	return 0;
}

int leerEntero(char *fn){
	FILE *fp;
	int n;
	fp = fopen(fn,"r");
	fscanf(fp,"%d",&n);
	fclose(fp);
	return n;
}

int main(int argc, char** argv){
	int x = 20;
	guardarEntero("hola.txt",100);
	x = leerEntero("hola.txt");
	printf("%d\n",x);
}

int main(int argc, char** argv){
 int n;
 pf = fopen(fn, "r");
 fscanf(fp,"%d\n",&n);
 fclose(fp);
 return n;
}

int main(int argc, char** argv){
 int x = 30;
 pid_t pid;

 pid = fork();
 if (pid == 0){
 int f = fibonacci(x);
 guardarEntero("hola",f);
 printf("%d",f);
 } else{
   int status;
   wait(&status);
   status = leerEntero("hola");
   printf("%d",status*100);

 }
}


