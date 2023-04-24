@build foo:
  clang -Wall -lm -o {{foo}} {{foo}}.c