// JOÃO VITOR TELES CENTRONE 32033125
#include"StaticStack.h"
#ifndef __STATIC_QUEUE_H__
#define __STATIC_QUEUE_H__

namespace DataStructures
{
	namespace Queue
	{

		const int STATIC_QUEUE_CAPACITY = 16;

		struct StaticQueue
		{
			int front;
			int rear;
			int count;

			Stack::StaticStack First;
			Stack::StaticStack Second;
		};

		StaticQueue Create();

		bool Enqueue(StaticQueue& queue, char elem);


		char Dequeue(StaticQueue& queue);

		char Front(const StaticQueue& queue);

		int Size(const StaticQueue& queue);


		int Count(const StaticQueue& queue);

		bool IsEmpty(const StaticQueue& queue);

		bool Clear(StaticQueue& queue);

	} 
}
#endif
