/** 
 * Name: Janet
 * Date: 2022-07-19
 * Title: Lab 4- FIFO
 * Description: This programs stimulates the FIFO algorithm for memory managment.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "node.h"
#include "queue.h"
typedef struct {//to
	int pageno;
} ref_page;
struct queue* q;
struct node* temp_page;
int main(int argc, char *argv[]){
	q = queue_create(); // creates the queue
		int C_SIZE = atoi(argv[1]); // size of cache passed by user
	//ref_page cache[C_SIZE]; // cache that stores pages
	char pageCache[1000]; // cache that holds the input from test file
	//int counter
	int line_counter = 0;
	//int i;
	int totalFaults = 0; //keeps track of the total faults
	
	/*for (i = 0; i < C_SIZE; i++){ //initialize cache array
		cache[i].pageno = -1;
	}*/
	
	while (fgets(pageCache, 101, stdin)){
			int page_num = atoi(pageCache); // stores number read from file as int
		line_counter++;
		// Page Replacement Implementation Here
		//stores the result of queue_find
		temp_page = queue_find(q, page_num);
		if (temp_page == NULL) {
			printf("Page Fault: %d \n", page_num);
			totalFaults++;
			if (queue_length(q) < C_SIZE) { // if the queue size is less than the user input size
				enqueue(q, page_num);
			}
			else { 
				dequeue(q);
				enqueue(q, page_num);
			}
		} 
	}
	
	
	printf("Total Page Requests: %d\n", line_counter);
	printf("Cache sized use: %d\n", C_SIZE);
	printf("Total Page Faults: %d\n", totalFaults);
	double hitCount = (double) (line_counter - totalFaults);
	printf("Total Page Hits: %f\n", hitCount);
	double missRatio = (double) totalFaults / (totalFaults + hitCount)*100;
	printf("Miss Ratio: %.2f%%\n", missRatio);
	double hitRatio = (double) (line_counter - totalFaults) / line_counter*100;
	printf("Hit Ratio: %.2f%%\n", hitRatio);
	
	// free memory
	queue_destroy(q);
	destroyNode(temp_page);
	return 0;
}
