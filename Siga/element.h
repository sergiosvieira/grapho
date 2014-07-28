//
//  Element.h
//  Siga
//
//  Created by Sergio Vieira on 23/07/14.
//  Copyright (c) 2014 Sergio Vieira. All rights reserved.
//

#ifndef __Siga__Element__
#define __Siga__Element__

class Element
{
protected:
    const char* m_label;
    long m_id;
public:
    long elementID();
    const char* label();
    void label(const char* a_label);
};
#endif /* defined(__Siga__Element__) */
