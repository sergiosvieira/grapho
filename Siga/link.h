//
//  link.h
//  Siga
//
//  Created by Sergio Vieira on 23/07/14.
//  Copyright (c) 2014 Sergio Vieira. All rights reserved.
//

#ifndef __Siga__link__
#define __Siga__link__

#include "Element.h"

class Node;

class Link : public Element
{
private:
    Node* m_from;
    Node* m_to;
public:
    Link(long a_id, const char* a_label, Node* a_from, Node* a_to);
    Node* from();
    Node* to();
};
#endif /* defined(__Siga__link__) */
