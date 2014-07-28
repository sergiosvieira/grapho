//
//  link.cpp
//  Siga
//
//  Created by Sergio Vieira on 23/07/14.
//  Copyright (c) 2014 Sergio Vieira. All rights reserved.
//

#include "link.h"

#include <assert.h>

Link::Link(long a_id, const char* a_label, Node* a_from, Node* a_to)
{
    assert(a_id >= 0);
    assert(a_from != NULL && a_to != NULL);
    
    m_label = a_label;
    m_from = a_from;
    m_to = a_to;
}

Node* Link::from()
{
    return m_from;
}

Node* Link::to()
{
    return m_to;
}
