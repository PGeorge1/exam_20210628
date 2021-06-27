////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Ring Buffer Smoke tests.
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       26.06.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <cassert>

#include "ringbuf.hpp"

typedef RingBuffer<int> IntRingBuffer;

int main()
{
    // smoke tests for an empty buffer
    IntRingBuffer emptyBuf;

    // smoke tests for a buffer with elements
//    IntRingBuffer buf(5);
//    assert(buf.getSize() == 5);
//    assert(buf.getCount() == 0);
//    assert(buf.isEmpty());
//    assert(!buf.isFull());


    return 0;
}


