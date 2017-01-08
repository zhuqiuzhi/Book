#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *count();
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
int counter = 0;

main() {
	int rc1, rc2;
	pthread_t thread1, thread2;
	/* 创建线程，每个线程独立执行函数 functionC */
	if((rc1 = pthread_create(&thread1, NULL, &count, NULL))) {
		printf("Thread creation failed: %d\n", rc1);
	}
	if((rc2 = pthread_create(&thread2, NULL, &count, NULL))) {
		printf("Thread creation failed: %d\n", rc2);
	}
	//wait for thread termination
	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
	exit(0); 
}

void *count() {
	//The pthread_mutex_lock() function locks mutex.  If the mutex is already locked, the calling thread will block
	//until the mutex becomes available.
	pthread_mutex_lock( &mutex1 );
	counter++;
	printf("Counter value: %d\n",counter);
	//If the current thread holds the lock on mutex, then the pthread_mutex_unlock() function unlocks mutex.
	pthread_mutex_unlock( &mutex1 );
}
