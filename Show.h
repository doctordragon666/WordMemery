#pragma once
#include "Strategy.h"
#include "File.h"
#include "WordInfo.h"
class Show :
    public Strategy
{
public:
    int AlgorithmInterface(Bookbase** global_b);
};

