// Copyright (C) 2018-2023 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

// { dg-do run { target c++11 } }
// { dg-require-cstdint "" }
// { dg-require-little-endian "" }

#include <ext/random>
#include <testsuite_hooks.h>

template<typename T>
struct seed_seq
{
  using result_type = unsigned;

  seed_seq() { }

  template<class U>
    seed_seq(std::initializer_list<U>) { }

  template<class InputIterator>
    seed_seq(InputIterator, InputIterator) { }

  template<class RandomAccessIterator>
    void generate(RandomAccessIterator first, RandomAccessIterator last)
    {
      called = true;
      if (first != last)
	*first = 42;
    }

  size_t size() const { called = true; return 1; }

  template<class OutputIterator>
    void param(OutputIterator dest) const { called = true; dest = 42; }

  // Prevents this type being considered as a seed sequence when
  // T is convertible to the engine's result_type:
  operator T() const noexcept { return T(); }

  bool called = false;
};

using engine_type
  = __gnu_cxx::simd_fast_mersenne_twister_engine<
    uint32_t, 607, 2,
    15, 3, 13, 3,
    0xfdff37ffU, 0xef7f3f7dU,
    0xff777b7dU, 0x7ff7fb2fU,
    0x00000001U, 0x00000000U,
    0x00000000U, 0x5986f054U>;

void
test01()
{
  seed_seq<unsigned> seed;
  engine_type x(seed);
  VERIFY( ! seed.called );
}

void
test02()
{
  seed_seq<void*> seed;
  engine_type x(seed);
  VERIFY( seed.called );

  static_assert(!std::is_constructible<engine_type, const seed_seq<void>&>(),
      "Cannot construct from a const seed_seq");
}

int main()
{
  test01();
  test02();
}