//
//  Element.cpp
//  Siga
//
//  Created by Sergio Vieira on 23/07/14.
//  Copyright (c) 2014 Sergio Vieira. All rights reserved.
//

#include "element.h"

long Element::elementID()
{
    return m_id;
}

const char* Element::label()
{
    return m_label;
}

void Element::label(const char* a_label)
{
    m_label = a_label;
}
