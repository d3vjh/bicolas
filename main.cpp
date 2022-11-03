/**
 * \mainpage enqueue
 * \author Jhonatan Moreno - Santiago Avila
 * \date Noviembre - 2022
 */

#include <iostream>
#import "queue.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	queue <int> enteros;
	queue<int> enteros2;
	cout<<enteros.isEmptyQueue()<<endl;
	enteros.enqueue(5, 'D');
	cout<<enteros.isEmptyQueue()<<endl;
	enteros.enqueue(6, 'D');
	enteros.enqueue(7, 'D');
	enteros.printQueue('I');
	enteros.dequeue('D');
	cout<<endl;
	enteros.printQueue('D');
	
	enteros2.enqueue(2, 'I');
	enteros2.enqueue(4, 'I');
	enteros2.enqueue(8, 'D');
	enteros2.printQueue('I');
	
	
	return 0;
}
