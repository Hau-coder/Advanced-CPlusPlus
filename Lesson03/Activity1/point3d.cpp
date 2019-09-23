///============================================================================
// Name        : point3d.cpp
// Author      : Brian Price
// Version     :
// Copyright   : Your copyright notice
// Description : Activity 1 Lesson 2
//============================================================================
#include "point3d.hpp"

Point3d::Point3d()
{
    for(auto& item : m_data)
    {
        item = 0;
    }
    m_data[NumberRows-1] = 1;
}

Point3d::Point3d(std::initializer_list<float> list)
{
     m_data[NumberRows-1] = 1;
    int i{0};
    for(auto it1 = list.begin(); i<NumberRows && it1 != list.end() ; ++it1, ++i)
    {
        m_data[i] = *it1;
    }
}

bool Point3d::operator==(const Point3d& rhs) const
{
    for(int i=0 ; i<NumberRows ; i++)
    {
        if (m_data[i] != rhs.m_data[i])
        {
            return false;
        }
    }
    return true;
}

