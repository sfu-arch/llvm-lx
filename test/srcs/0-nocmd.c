int main() {return 0;}

// RUN: clang -c -g -emit-llvm %s -o %t.bc 
// RUN: llvm-lx %t.bc 
// XFAIL: * 
