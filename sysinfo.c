#include "types.h"
#include "stat.h"
#include "user.h"

int main()
{
  printf(1 , "Number of Processes: %d\n" , numproc());
  printf(1 , "Number of Opened files: %d\n" , openfiles());
  exit();
}

