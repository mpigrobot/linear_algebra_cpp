#project name
PROJECT(H)
INCLUDE_DIRECTORIES(../)

SET(ALL_CODE_LIST h.cpp)
MESSAGE(${ALL_CODE_LIST})

#add executable file
ADD_EXECUTABLE(H ${ALL_CODE_LIST})
