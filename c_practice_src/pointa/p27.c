#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#define RAII_VALIABLE(vartype, varname, initval, dtor) \
  void _dtor_ ## varname(vartype * v) { dtor(*v); } \
  vartype varname _attribute_((cleanup(_dtor_ ## varname))) = (initval)

void raiiExample() {
  char* name;
  RAII_VARIABLE(char*, name, (char*)malloc(32), free);
  strcpy(name, "RAIIExample");
  printf("%s\n", name);
}

int main()
{
  raiiExample();
  return 0;
}

