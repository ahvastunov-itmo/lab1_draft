#pragma once
#include <cinttypes>

namespace NNumber {

struct uint2022_t {
    // implement
};

uint2022_t from_uint(uint32_t i);

uint2022_t from_string(const char* buff);

uint2022_t add_op(const uint2022_t& lhs, const uint2022_t& rhs);

uint2022_t subtr_op(const uint2022_t& lhs, const uint2022_t& rhs);

uint2022_t mult_op(const uint2022_t& lhs, const uint2022_t& rhs);


bool equal_op(const uint2022_t& lhs, const uint2022_t& rhs);

void print_value(const uint2022_t& value);

} // namespace NNumber