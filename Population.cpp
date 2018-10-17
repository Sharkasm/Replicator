#include "pch.h"
#include "Population.h"

#include <algorithm>

Population::Population( unsigned int reserveSize )
{
    m_group.reserve( reserveSize );
}

Population::~Population()
{
}

void Population::push( std::unique_ptr<Individual> ind )
{
    m_group.push_back( std::move( ind ) );
}

void Population::pop()
{
    m_group.pop_back();
}

void Population::sort( bool ascending )
{
    std::sort( m_group.begin(), m_group.end() );
}

void Population::clear()
{
    m_group.clear();
}

