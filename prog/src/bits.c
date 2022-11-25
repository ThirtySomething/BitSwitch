//******************************************************************************
// MIT License
//
// Copyright (c) 2022 ThirtySomething
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//******************************************************************************

#include "bits.h"
#include <stdio.h>

//******************************************************************************
void bitPrint(uint32_t bits)
{
    uint32_t size = sizeof(unsigned int);
    uint32_t maxPow = 1 << (size * 8 - 1);
    for (uint32_t i = 0; i < size * 8; ++i)
    {
        // print last bit and shift left.
        printf("%u ", bits & maxPow ? 1 : 0);
        bits = bits << 1;
    }
}
//******************************************************************************
uint32_t bitClearByBit(uint32_t flags, uint8_t bit)
{
    uint32_t bitmask = 1;
    bitmask = bitmask << bit;
    bitmask = ~bitmask;
    uint32_t result = flags & bitmask;
    return result;
}
//******************************************************************************
bool bitIsSetByBit(uint32_t flags, uint8_t bit)
{
    uint32_t bitmask = 1;
    bitmask = bitmask << bit;
    bool result = (0 != (flags & bitmask));
    return result;
}
//******************************************************************************
uint32_t bitSetByBit(uint32_t flags, uint8_t bit)
{
    uint32_t bitmask = 1;
    bitmask = bitmask << bit;
    uint32_t result = flags | bitmask;
    return result;
}
//******************************************************************************
