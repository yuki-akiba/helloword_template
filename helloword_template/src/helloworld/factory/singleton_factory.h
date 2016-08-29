#ifndef _SINGLETON_FACTORY_H_
#define _SINGLETON_FACTORY_H_

template<class T>
class SingletonFactory {
public:
  static T* Instance() {
    static T s_instance;
    return &s_instance;
  }

protected:
  //typedef T obj_type;
  SingletonFactory() {}
  ~SingletonFactory() {}

private:
  SingletonFactory(const SingletonFactory&) = delete;
  SingletonFactory(SingletonFactory&&) = delete;
  SingletonFactory& operator=(const SingletonFactory&) = delete;
  SingletonFactory& operator=(SingletonFactory&&) = delete;
};

//template<class T>
//typename SingletonFactory<T>::obj_type SingletonFactory<T>::s_instance;

#endif  // _SINGLETON_FACTORY_H_
