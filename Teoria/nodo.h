//
//  nodo.h
//  Teoria
//
//  Created by Alexander Arturo Baylon Ibanez on 14/09/15.
//  Copyright (c) 2015 Alexander Arturo Baylon Ibanez. All rights reserved.
//

#ifndef __Teoria__nodo__
#define __Teoria__nodo__

#include <stdio.h>

template<class T>
struct cNode
{
    T m_data;
    cNode<T> * m_next;
    cNode(T x)
    {
        m_data = x;
        m_next = nullptr;
    }
};


template <class T>
class cList {
public:
    cNode<T> m_head;
    cList();
    ~cList();
    bool insert(T);
    bool find(T,cNode<T>**&);
};




#endif /* defined(__Teoria__nodo__) */
