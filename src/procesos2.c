/*
 ============================================================================
 Name        : procesos2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "funciones.h"
//
//       #include <string.h>
//       #include <unistd.h>
//       #include <errno.h>
//       #include <ctype.h>

//void * runner(void* param);
int value;
//int main(void) {
//	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
//
//	int pid;pthread_t tid;pthread_attr_t attr;
//	pid=fork();
//	if(pid==0){//es proceso hijo
//		pthread_attr_init(&attr);
//		pthread_create(&tid,&attr,&runner,NULL);
//		pthread_join(tid,NULL);
//		printf("HIJO: valor = %d  \n",value);
//	}
//	else if (pid>0) {
//		wait(NULL);
//		printf("Padre , Valor = %d  \n",value);
//	}
//	return EXIT_SUCCESS;
//}
int main(void) {
	  pthread_t thread;
	  int which_prime = 10000;
	  int prime;
	  pthread_create(&thread, NULL, &compute_prime, &which_prime);
	  sleep(2);
	  pthread_join (thread, (void*) &prime);
	  printf("The %dth prime number is %d.\n", which_prime, prime);
	  return 0;
}
//http://www2.electron.frba.utn.edu.ar/~mdoallo/presentaciones.save.2012/clase-20121108-threads

