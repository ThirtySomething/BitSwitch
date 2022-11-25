#pragma once

#include <stdint.h>
#include <stdbool.h>

//******************************************************************************
bool plcIsBitSet(uint32_t flags, uint8_t bit);
//******************************************************************************
uint32_t plcBitClearByBit(uint32_t flags, uint8_t bit);
//******************************************************************************
uint32_t plcBitSetByBit(uint32_t flags, uint8_t bit);
//******************************************************************************
uint32_t plcBitClearByMask(uint32_t flags, uint32_t bitmask);
//******************************************************************************
uint32_t plcBitSetByMask(uint32_t flags, uint32_t bitmask);
//******************************************************************************
bool plcIsBitSetByMask(uint32_t flags, uint32_t bitmask);
//******************************************************************************
