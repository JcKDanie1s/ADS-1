// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
if (value == 1 || value == 0)
{
return false;
}
for (uint64_t i = 2; i <= value / 2; ++i)
{
if (value % i == 0)
{
return false;
}
}
return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
int j = 0;
for (uint64_t i = 2;; ++i)
{
if (checkPrime(i))
{
++j;
if (j == n)
{
return i;
}
}
}
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
for (uint64_t i = value + 1;; ++i)
{
if (checkPrime(i))
{
return i;
}
}
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
uint64_t sumP = 0;
for (uint64_t i = 0; i < hbound; ++i)
{
if (checkPrime(i))
{
sumP += i;
}
}
return sumP;
}
