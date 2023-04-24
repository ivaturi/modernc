alias b := build

@build foo:
  clang -Wall -lm -o {{foo}} {{foo}}.c