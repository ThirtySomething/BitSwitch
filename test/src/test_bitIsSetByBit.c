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

#include "test_bitIsSetByBit.h"
#include "bits.h"

void test_bitIsSetByBit(void)
{
    uint32_t flags = 0x00000000;
    printf("\nflags : ");
    bitPrint(flags);
    for (uint8_t x = 0; x < 32; x++)
    {
        bool isSet = bitIsSetByBit(flags, x);
        TEST_CHECK(false == isSet);

        uint32_t resultReal = bitSetByBit(flags, x);
        isSet = bitIsSetByBit(resultReal, x);

        printf("\nx [%02d]: ", x);
        bitPrint(resultReal);

        TEST_CHECK(true == isSet);
    }
    printf("\n");
}
