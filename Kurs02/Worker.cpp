#include "stdafx.h"
#include "Worker.h"


Worker::Worker():Person(),factory("zavod"), level("level"), payment(0)
{
}

Worker::Worker(string & factory0, string & level0, int payment0) : Person(),
						factory(factory0), level(level0), payment(payment0)
{
	
}


Worker::~Worker()
{
}


