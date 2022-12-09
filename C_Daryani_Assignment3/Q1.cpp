#include <iostream>
#include <queue>
using namespace std;

//Takes first element and moves it to the rear
void to_rear(queue<int>& old_q) {
	//Store the first element
	int front_of_q = old_q.front();
	//Remove the first element
	old_q.pop();
	//Push the first element (which in a queue, places it in the rear)
	old_q.push(front_of_q);
}

//Prints the queue
void printQ(queue<int> q)
{
	while (!q.empty()){
		cout<<" "<<q.front();
		q.pop();
	}
	cout<<endl;
}