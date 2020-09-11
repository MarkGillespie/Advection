#include "advectionl.h"

template <typename Value>
Value srgb_gamma(Value x) {
    return enoki::select(x <= 0.0031308f, x * 12.92f,
                         enoki::pow(x * 1.055f, 1.f / 2.4f) - 0.055f);
}
