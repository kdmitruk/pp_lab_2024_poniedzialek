cmake_minimum_required(VERSION 3.16)

project(pp_lab_2024_sroda LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

function(generate_exercise_list NUM_TASKS OUTPUT_LIST)
    set(result)
    math(EXPR count "${NUM_TASKS} - 1")
    foreach(i RANGE ${count})
        math(EXPR task_num "${i} + 1")
        if (task_num LESS 10)
            set(task_num_padded "0${task_num}")
        else()
            set(task_num_padded "${task_num}")
        endif()
        list(APPEND result ${task_num_padded})
    endforeach()
    set(${OUTPUT_LIST} "${result}" PARENT_SCOPE)
endfunction()

add_subdirectory(lab_01)
