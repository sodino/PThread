//============================================================================
// Name        : PThread.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <pthread.h>

using namespace std;
#ifndef NULL
#define NULL   ((void *) 0)
#endif

void* print_message(void*) {
    cout << "Threading \n";
    return NULL;
}
int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	pthread_t t1;

	pthread_create(&t1, NULL, &print_message, NULL);
	cout << "Hello";

	// Optional.
	void* result;
	pthread_join(t1, &result);
	// :~
	return 0;
}
