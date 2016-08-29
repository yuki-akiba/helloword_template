#include "hello.h"
#include "factory/singleton_factory.h"
#include <boost/thread.hpp>

int main()
{
  boost::thread thrd(boost::bind(&hello::Say,
                                 hello::Instance()));
  thrd.join();
  //SingletonFactory<hello>::Instance()->Say();
}
