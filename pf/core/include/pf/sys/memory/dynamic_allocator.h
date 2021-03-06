/**
 * PLAIN FRAMEWORK ( https://github.com/viticm/plainframework )
 * $Id dynamic_allocator.h
 * @link https://github.com/viticm/plainframework for the canonical source repository
 * @copyright Copyright (c) 2014- viticm( viticm.ti@gmail.com )
 * @license
 * @user viticm<viticm.ti@gmail.com>
 * @date 2014/06/25 20:47
 * @uses the system memory manger base class
 */
#ifndef PF_SYS_MEMORY_DYNAMIC_ALLOCATOR_H_
#define PF_SYS_MEMORY_DYNAMIC_ALLOCATOR_H_

#include "pf/sys/memory/config.h"

namespace pf_sys {

namespace memory {

class PF_API DynamicAllocator {

 public:
   DynamicAllocator();
   ~DynamicAllocator();

 public:
   void *malloc(size_t size);
   void free();
   void *getpointer();
   size_t getsize() const;
 
 private:
   void *pointer_;
   size_t size_;

}; 

}; //namespace memory

}; //namespace pf_sys

#endif //PF_SYS_MEMORY_DYNAMIC_ALLOCATOR_H_
