#include <stdio.h>

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
  
main() {
  printf("Hello %sc%so%sl%so%sr%sf%su%sl %sworld\n", KRED, KGRN, KYEL, KBLU, KMAG, KCYN, KRED, KBLU, KNRM);
}