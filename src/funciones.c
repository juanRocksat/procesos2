#include <pthread.h>
#include <pthread.h>
#include <stdio.h>
 int n;
 int value=0;
void* compute_prime (void* arg) {
  int candidate = 2;
   n = *((int*) arg);
  while (1) {
    int factor;
    int is_prime = 1;
    for (factor = 2; factor < candidate; ++factor)
      if (candidate % factor == 0) {
    	  is_prime = 0;
//    	  break;
    	  puts("break");
      }
      else if (is_prime && n==0) {
		  puts("termine");
		  return (void*) candidate;
      }
      ++candidate;
  }
  return NULL;
}
void* runner(){
	value=5;
	pthread_exit(0);
}

struct char_print_parms {
	char character;
	int count;
};

void* char_print (void* parameters) {
	struct char_print_parms* p = (struct char_print_parms*)parameters;
	int i;
	for(i = 0; i < p->count; ++i)
	fputc(p->character , stderr);
	return NULL;
}
