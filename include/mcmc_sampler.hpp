//
// Created by Davide Nicoli on 18/05/22.
//

#ifndef MCMC_SAMPLER_MCMC_SAMPLER_HPP
#define MCMC_SAMPLER_MCMC_SAMPLER_HPP

#include <concepts>

template <typename Numerator, typename Denominator>
requires (std::is_floating_point_v<Numerator> && std::is_floating_point_v<Denominator>)
auto divide(Numerator n, Denominator d)
{
    return n / d;
}

#endif //MCMC_SAMPLER_MCMC_SAMPLER_HPP
