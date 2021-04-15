// JOÃO VITOR TELES CENTRONE 32033125
#include <iostream>
#include "StaticQueue.h"
#include"StaticStack.h"
using namespace DataStructures;
using namespace std;

namespace DataStructures
{
	namespace Queue
	{

		StaticQueue Create()
		{
			StaticQueue queue =
			{
				0, 
				0, 
				0, 	

				Stack::Create(),
				Stack::Create()
			};

			return queue;
		}

		bool Enqueue(StaticQueue& queue, char elem)
		{
			
			queue.count++;
			return Stack::Push(queue.First, elem);
		}

		char Dequeue(StaticQueue& queue)
		{
			if (queue.count == 0)
			{
				std::cout << "A fila esta vazia ";
				return '\0';
			}
			while (!Stack::IsEmpty(queue.First))
			{
				Stack::Push(queue.Second, Stack::Pop(queue.First));

			}
			char aux = Stack::Pop(queue.Second);
			while (Stack::IsEmpty(queue.Second)) {
				Stack::Push(queue.First, Stack::Pop(queue.Second));
			}
			queue.count--;
			return aux;
			
		}

		char Front(const StaticQueue& queue)
		{
			if (queue.count == 0)
			{
				std::cout << " A fila esta vazia ";
				return queue.count;
			}
			else
			{
				return Stack::Top(queue.First);
			}
			
		}

		int Size(const StaticQueue& queue) 
		{
			return Queue::STATIC_QUEUE_CAPACITY;
		}


		int Count(const StaticQueue& queue) 
		{
			return queue.count;
		}

		bool IsEmpty(const StaticQueue& queue) 
		{
			return queue.count == 0;
		}

		bool Clear(StaticQueue& queue) 
		{
			while (!queue.count == 0)
			{
				Stack::Pop(queue.First);
			}
			return queue.count == 0;

		}

		
	} 
} 