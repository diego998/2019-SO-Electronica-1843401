#include <stdlib.h>                                                                              
                                                                                                 
void demo(char *x, char* z){                                                                     
 *x = 'b';                                                                                       
 *z = 'c';                                                                                       
}                                                                                                
                                                                                                 
int main(int argc, char** argv) {                                                                
  char z = 'a';                                                                                  
  char *y;                                                                                       
                                                                                                 
  y = (char*)malloc(sizeof(char));                                                               
  demo(&z,y);                                                                                    
  printf("%c %c\n",z,*y);                                                                        
                                                                                                 
  return 0;                                                                                      
} 
