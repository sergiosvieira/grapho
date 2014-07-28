//
//  sparse-matrix.h
//  Siga
//
//  Created by Sergio Vieira on 23/07/14.
//  Copyright (c) 2014 Sergio Vieira. All rights reserved.
//

#ifndef __Siga__sparse_matrix__
#define __Siga__sparse_matrix__

#include <map>

template <class T>
class SparseMatrix
{
public:
    void add(long a_row, long a_col, T a_value)
    {
        m_map[a_row][a_col] = a_value;
    }
    T get(long a_row, long a_col)
    {
        return m_map[a_col][a_col];
    }
private:
    std::map<long, std::map<long, T> > m_map;
};

#endif /* defined(__Siga__sparse_matrix__) */
