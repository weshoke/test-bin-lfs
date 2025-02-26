#include "nanobind/nanobind.h"
#include <iostream>

extern "C" int a_dep();

NB_MODULE(_bin_lfs, m)
{
    m.def(
        "test",
        []()
        { return 100; });

    m.def(
        "a_dep",
        a_dep);
}
