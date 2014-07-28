//
//  node.h
//  Siga
//
//  Created by Sergio Vieira on 23/07/14.
//  Copyright (c) 2014 Sergio Vieira. All rights reserved.
//

#ifndef __Siga__node__
#define __Siga__node__

#include "Element.h"

class Node : public Element
{
private:
public:
    Node(long a_id, const char* a_label);
};

#endif /* defined(__Siga__node__) */
