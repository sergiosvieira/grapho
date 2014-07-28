//
//  main.cpp
//  Siga
//
//  Created by Sergio Vieira on 23/07/14.
//  Copyright (c) 2014 Sergio Vieira. All rights reserved.
//

#include <iostream>

#include "graph-manager.h"
#include "node.h"

int main(int argc, const char * argv[])
{
    GraphManager gm;
    
    Node* node1 = gm.addNode("piranhaçu");
    Node* node2 = gm.addNode("itaoca");
    
    gm.addLink("rio tal e tudim", node1->elementID(), node2->elementID());
    
    return 0;
}

