int main(int argc, char** argv){
 int n;
 pf = fopen(fn, "r");
 fscanf(fp,"%d",&n);
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
