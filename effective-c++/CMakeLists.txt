cmake_minimum_required(VERSION 3.19.2)

set(SUBTMP 02 04 23 31 35) #设置要编译一个目录的名称

foreach(i RANGE 2 40)
    if(${i} GREATER 10)
        list(APPEND SINGALF "item-${i}")
    elseif(${i} EQUAL 10)
        list(APPEND SINGALF "item-${i}")
    else()
        list(APPEND SINGALF "item-0${i}")
    endif()
endforeach()

foreach(i ${SUBTMP})
    list(APPEND SUBD "item-${i}")
endforeach()

foreach(it ${SUBD})
    list(REMOVE_ITEM SINGALF ${it})
endforeach()


foreach(i ${SINGALF})
    add_executable(${i} "${i}.cc")
endforeach()

foreach(i ${SUBD})
    add_subdirectory(${i})
endforeach()

