#ifndef MAGICKINDIVIDUAL_H
#define MAGICKINDIVIDUAL_H

#include <vector>
#include <Magick++.h>

#include "Individual.h"


class MagickIndividual : public Individual
{
public:
    MagickIndividual();
    ~MagickIndividual() override;

    int fitness() const override;

private:
    std::vector<Magick::Quantum> adn;
};

#endif MAGICKINDIVIDUAL_H