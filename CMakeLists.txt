cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 14)
project(random123 VERSION 0.0.1)
include_directories(include)
set(SOURCE
        include/Random123/conventional/Engine.hpp
        include/Random123/conventional/gsl_cbrng.h
        include/Random123/features/clangfeatures.h
        include/Random123/features/compilerfeatures.h
        include/Random123/features/gccfeatures.h
        include/Random123/features/iccfeatures.h
        include/Random123/features/metalfeatures.h
        include/Random123/features/msvcfeatures.h
        include/Random123/features/nvccfeatures.h
        include/Random123/features/open64features.h
        include/Random123/features/openclfeatures.h
        include/Random123/features/pgccfeatures.h
        include/Random123/features/sse.h
        include/Random123/features/sunprofeatures.h
        include/Random123/features/xlcfeatures.h
        include/Random123/aes.h
        include/Random123/array.h
        include/Random123/ars.h
        include/Random123/boxmuller.hpp
        include/Random123/gsl_microrng.h
        include/Random123/MicroURNG.hpp
        include/Random123/philox.h
        include/Random123/ReinterpretCtr.hpp
        include/Random123/threefry.h
        include/Random123/u01fixedpt.h
        include/Random123/uniform.hpp
        examples/example_seeds.h
        examples/pi_aes.cpp
        examples/pi_capi.c
        examples/pi_check.h
        examples/pi_cppapi.cpp
        examples/pi_gsl.c
        examples/pi_microurng.cpp
        examples/pi_uniform.cpp
        examples/simple.c
        examples/simplepp.cpp
        )
add_library(random123 MODULE ${SOURCE})
set_target_properties(random123 PROPERTIES LINKER_LANGUAGE CXX)
