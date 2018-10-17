#ifndef POPULATION_H
#define POPULATION_H

#include <vector>
#include <memory>


#include "Individual.h"


class Population
{
public:
    explicit Population( unsigned int reserveSize );
    ~Population();

    Individual* get( unsigned int i ) { return m_group.at( i ).get(); };

    void push( std::unique_ptr<Individual> );
    void pop();

    size_t size() { return m_group.size(); };
    void sort( bool ascending );
    void clear();

private:
    std::vector<std::unique_ptr<Individual>> m_group;
};


#endif POPULATION_H
