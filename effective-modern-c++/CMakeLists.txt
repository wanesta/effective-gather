find_package(Threads REQUIRED)

add_executable(base-1 base-1.cc)
add_executable(base-2 base-2.cc)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

foreach(i RANGE 1 42)
    if(${i} GREATER 10)
        list(APPEND SINGALF "item${i}")
    elseif(${i} EQUAL 10)
        list(APPEND SINGALF "item${i}")
    else()
        list(APPEND SINGALF "item0${i}")
    endif()
endforeach()

foreach(i ${SUBTMP})
    list(APPEND SUBD "item${i}")
endforeach()



foreach(i ${SINGALF})
    if(${i} EQUAL 35,36,37,38,39)
        #add_executable(${i} "${i}.cc")
        #target_link_libraries(item37 PRIVATE Threads::Threads)
    else()
        add_executable(${i} "${i}.cc")
    endif()
endforeach()
