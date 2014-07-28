//
//  graph-manager.cpp
//  Siga
//
//  Created by Sergio Vieira on 27/07/14.
//  Copyright (c) 2014 Sergio Vieira. All rights reserved.
//

#include "graph-manager.h"
#include "node.h"
#include "link.h"

#include <assert.h>

long GraphManager::m_currentNodeIndex = 0;
long GraphManager::m_currentLinkIndex = 0;

Node* GraphManager::addNode(const char* a_label)
{
    Node* node = new Node(m_currentNodeIndex, a_label);
    
    m_nodes[m_currentNodeIndex] = node;
    m_currentNodeIndex++;
    
    return node;
}

Node* GraphManager::getNode(long a_id)
{
    assert(a_id >= 0);
    
    return m_nodes[a_id];
}

Link* GraphManager::addLink(const char* a_label,  long a_from, long a_to)
{
    Node* from = getNode(a_from);
    Node* to = getNode(a_to);
    
    assert(from != NULL && to != NULL);
    
    Link* link = new Link(m_currentLinkIndex, a_label, from, to);
    
    m_sparseMatrix.add(a_from, a_to, link);
    m_currentLinkIndex++;
    
    return link;
}

Link* GraphManager::getLink(long a_id)
{
    return m_links[a_id];
}

Link* GraphManager::getLink(long a_from, long a_to)
{
    return m_sparseMatrix.get(a_from, a_to);
}
