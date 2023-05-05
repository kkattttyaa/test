#pragma once
#include <cinttypes>
#include <iostream>

const uint32_t kBase = 1000000000;
const uint32_t kSize = 68;
const uint32_t kChars = 9;
const uint32_t kMax = 609;

struct uint2022_t {
    uint32_t numbers[kSize];
    uint2022_t() {
        std::memset(numbers, 0 , sizeof numbers);
    }
};

static_assert(sizeof(uint2022_t) <= 300, "Size of uint2022_t must be no higher than 300 bytes");

uint2022_t from_uint(uint32_t i);

uint2022_t from_string(const char* buff);

uint2022_t operator+(const uint2022_t& lhs, const uint2022_t& rhs);

uint2022_t operator-(const uint2022_t& lhs, const uint2022_t& rhs);

uint2022_t operator*(const uint2022_t& lhs, const uint2022_t& rhs);

uint2022_t operator/(const uint2022_t& lhs, const uint2022_t& rhs);

bool operator==(const uint2022_t& lhs, const uint2022_t& rhs);

bool operator!=(const uint2022_t& lhs, const uint2022_t& rhs);

std::ostream& operator<<(std::ostream& stream, const uint2022_t& value);

