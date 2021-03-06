//
// Created by Szymon Harabasz on 31.12.21.
//

#ifndef CPPDEMOS_SEMANTIC_TYPES_H
#define CPPDEMOS_SEMANTIC_TYPES_H

template<int M, int K, int S>
struct MksUnit {
    enum { metre = M, kilogram = K, second = S };
};

template<typename MksUnit>
class Value {
private:
    long double magnitude{ 0.0 };
public:
    constexpr explicit Value(const long double magnitude) noexcept : magnitude(magnitude) { }
    constexpr long double getMagnitude() const noexcept {
        return magnitude;
    }
};

using DimensionlessQuantity = Value<MksUnit<0, 0, 0>>;
using Length = Value<MksUnit<1, 0, 0>>;
using Area = Value<MksUnit<2, 0, 0>>;
using Volume = Value<MksUnit<3, 0, 0>>;
using Mass = Value<MksUnit<0, 1, 0>>;
using Time = Value<MksUnit<0, 0, 1>>;
using Speed = Value<MksUnit<1, 0, -1>>;
using Acceletation = Value<MksUnit<1, 0, -2>>;
using Frequency = Value<MksUnit<0, 0, -1>>;
using Force = Value<MksUnit<1, 1, -2>>;
using Pressure = Value<MksUnit<-1, 1, -2>>;

using Momentum = Value<MksUnit<1, 1, -1>>;

constexpr Acceletation gravitationalAccelerationOnEarth{ 9.80665 };
constexpr Pressure standartPressureOnSeaLevel{ 1013.25 };
constexpr Speed speedOfLight{ 299792458.0 };
constexpr Frequency concertPitchA{ 440.0 };
constexpr Mass neutronMass{ 1.6749268e-27 };

template<int M, int K, int S>
constexpr Value<MksUnit<M, K, S>> operator+(
        const Value<MksUnit<M, K, S>>& lhs, const Value<MksUnit<M, K, S>>& rhs) noexcept {
    return Value<MksUnit<M, K, S>>(lhs.getMagnitude() + rhs.getMagnitude());
}
template<int M, int K, int S>
constexpr Value<MksUnit<M, K, S>> operator-(
        const Value<MksUnit<M, K, S>>& lhs, const Value<MksUnit<M, K, S>>& rhs) noexcept {
    return Value<MksUnit<M, K, S>>(lhs.getMagnitude() - rhs.getMagnitude());
}
template<int M1, int K1, int S1, int M2, int K2, int S2>
constexpr Value<MksUnit<M1 + M2, K1 + K2, S1 + S2>> operator*(
        const Value<MksUnit<M1, K1, S1>>& lhs, const Value<MksUnit<M2, K2, S2>>& rhs) noexcept {
    return Value<MksUnit<M1 + M2, K1 + K2, S1 + S2>>(lhs.getMagnitude() * rhs.getMagnitude());
}
template<int M1, int K1, int S1, int M2, int K2, int S2>
constexpr Value<MksUnit<M1 - M2, K1 - K2, S1 - S2>> operator/(
        const Value<MksUnit<M1, K1, S1>>& lhs, const Value<MksUnit<M2, K2, S2>>& rhs) noexcept {
    return Value<MksUnit<M1 - M2, K1 - K2, S1 - S2>>(lhs.getMagnitude() / rhs.getMagnitude());
}

constexpr Momentum impulseValueForCourseCorrection = Force { 30.0 } * Time{ 3.0 };

constexpr Force operator""_N(long double magnitude) {
    return Force (magnitude);
}
constexpr Acceletation operator""_ms2(long double magnitude) {
    return Acceletation (magnitude);
}
constexpr Time operator""_s(long double magnitude) {
    return Time (magnitude);
}
constexpr Momentum operator""_Ns(long double magnitude) {
    return Momentum (magnitude);
}

void semantic_types();

#endif //CPPDEMOS_SEMANTIC_TYPES_H
