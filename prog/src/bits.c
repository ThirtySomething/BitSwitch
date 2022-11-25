#include "bits.h"

//******************************************************************************
bool plcIsBitSet(uint32_t flags, uint8_t bit)
{
    uint32_t bitmask = 1;
    bitmask = bitmask << bit;
    return plcIsBitSetByMask(flags, bitmask);
}
//******************************************************************************
uint32_t plcBitClearByBit(uint32_t flags, uint8_t bit)
{
    uint32_t bitmask = 1;
    bitmask = bitmask << bit;
    return plcBitClearByMask(flags, bitmask);
}
//******************************************************************************
uint32_t plcBitSetByBit(uint32_t flags, uint8_t bit)
{
    uint32_t bitmask = 1;
    bitmask = bitmask << bit;
    return plcBitSetByMask(flags, bitmask);
}
//******************************************************************************
uint32_t plcBitClearByMask(uint32_t flags, uint32_t bitmask)
{
    uint32_t flagsOut = flags;
    flagsOut &= ~bitmask;
    return flagsOut;
}
//******************************************************************************
uint32_t plcBitSetByMask(uint32_t flags, uint32_t bitmask)
{
    uint32_t flagsOut = flags;
    flagsOut |= bitmask;
    return flagsOut;
}
//******************************************************************************
bool plcIsBitSetByMask(uint32_t flags, uint32_t bitmask)
{
    uint32_t resultRaw = flags & bitmask;
    bool result = resultRaw != 0;
    return result;
}
