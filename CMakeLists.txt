cmake_minimum_required(VERSION 3.23)
project(SP2022_MID1 C)

set(CMAKE_C_STANDARD 99)

add_executable(main main.c)

add_executable(aud-1-task-1 auditory-exercises/aud-ex-1/task1.c)
add_executable(aud-1-task-2 auditory-exercises/aud-ex-1/task2.c)
add_executable(aud-1-task-3 auditory-exercises/aud-ex-1/task3.c)
add_executable(aud-1-task-4 auditory-exercises/aud-ex-1/task4.c)
add_executable(aud-1-task-5 auditory-exercises/aud-ex-1/task5.c)
add_executable(aud-1-task-6 auditory-exercises/aud-ex-1/task6.c)
add_executable(aud-1-task-7 auditory-exercises/aud-ex-1/task7.c)
add_executable(aud-1-task-8 auditory-exercises/aud-ex-1/task8.c)
add_executable(aud-1-task-9 auditory-exercises/aud-ex-1/task9.c)

add_executable(lab-1-task-1 laboratory-exercises/lab-ex-1/task1.c)
add_executable(lab-1-task-2 laboratory-exercises/lab-ex-1/task2.c)
add_executable(lab-1-task-3 laboratory-exercises/lab-ex-1/task3.c)

add_executable(add-ex-1 additional-exercises/ex1.c additional-exercises/ex1.c)
add_executable(add-ex-2 additional-exercises/ex2.c additional-exercises/ex2.c)
add_executable(add-ex-3 additional-exercises/ex3.c additional-exercises/ex3.c)

add_executable(lab-2-task-2 laboratory-exercises/lab-ex-2/task2.c)
add_executable(lab-2-task-3 laboratory-exercises/lab-ex-2/task3.c)