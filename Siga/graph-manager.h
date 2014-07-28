//
//  graph-manager.h
//  Siga
//
//  Created by Sergio Vieira on 27/07/14.
//  Copyright (c) 2014 Sergio Vieira. All rights reserved.
//

#ifndef __Siga__graph_manager__
#define __Siga__graph_manager__

#include "sparse-matrix.h"
#include <map>

class Node;
class Link;

class GraphManager
{
public:
    Node* addNode(const char* a_label);
    Node* getNode(long a_id);
    Link* addLink(const char* a_label, long a_from, long a_to);
    Link* getLink(long a_id);
    Link* getLink(long a_from, long a_to);
private:
    static long m_currentNodeIndex;
    static long m_currentLinkIndex;
    SparseMatrix<Link*> m_sparseMatrix;
    std::map<long, Node*> m_nodes;
    std::map<long, Link*> m_links;
};

#endif /* defined(__Siga__graph_manager__) */
