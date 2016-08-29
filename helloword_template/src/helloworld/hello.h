#ifndef _HELLOWORLD_HEADER_
#define _HELLOWORLD_HEADER_

#include "factory/singleton_factory.h"

class hello : public SingletonFactory<hello> {
public:
  friend class SingletonFactory<hello>;
  void Say();
private:
  hello(){}
};

#endif  // _HELLOWORLD_HEADER_
