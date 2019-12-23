// The MIT License (MIT)
//
// Copyright (c) 2018 Mateusz Pusz
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

#pragma once

#include <units/prefix.h>
#include <ratio>

namespace units::si {

struct prefix : prefix_type {};

// TODO Remove dependency on std::ratio

struct atto : units::prefix<atto, prefix, "a", ratio<1, std::atto::den>> {};
struct femto : units::prefix<femto, prefix, "f", ratio<1, std::femto::den>> {};
struct pico : units::prefix<pico, prefix, "p", ratio<1, std::pico::den>> {};
struct nano : units::prefix<nano, prefix, "n", ratio<1, std::nano::den>> {};
struct micro : units::prefix<micro, prefix, "\u00b5", ratio<1, std::micro::den>> {};
struct milli : units::prefix<milli, prefix, "m", ratio<1, std::milli::den>> {};
struct centi : units::prefix<centi, prefix, "c", ratio<1, std::centi::den>> {};
struct deci : units::prefix<deci, prefix, "d", ratio<1, std::deci::den>> {};
struct deca : units::prefix<deca, prefix, "da", ratio<std::deca::num>> {};
struct hecto : units::prefix<hecto, prefix, "h", ratio<std::hecto::num>> {};
struct kilo : units::prefix<kilo, prefix, "k", ratio<std::kilo::num>> {};
struct mega : units::prefix<mega, prefix, "M", ratio<std::mega::num>> {};
struct giga : units::prefix<giga, prefix, "G", ratio<std::giga::num>> {};
struct tera : units::prefix<tera, prefix, "T", ratio<std::tera::num>> {};
struct peta : units::prefix<peta, prefix, "P", ratio<std::peta::num>> {};
struct exa : units::prefix<exa, prefix, "E", ratio<std::exa::num>> {};

}  // namespace units::si