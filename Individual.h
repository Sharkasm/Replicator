#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

class Individual
{
public:
    virtual ~Individual() {};

    virtual int fitness() const = 0;
};

#endif INDIVIDUAL_H
