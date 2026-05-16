# CMake generated Testfile for 
# Source directory: /home/jhj/compiler/bootstrap
# Build directory: /home/jhj/compiler/build/bootstrap
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(hello_c "/home/jhj/compiler/build/bootstrap/run_test.sh" "hello_c" "pathcc" "hello_c.c")
ADD_TEST(hello_cpp "/home/jhj/compiler/build/bootstrap/run_test.sh" "hello_cpp" "pathCC" "hello_cpp.cpp")
