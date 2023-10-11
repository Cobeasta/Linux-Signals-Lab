#include<signal.h>

void div0handler();

int main()
{

  signal(SIGFPE, div0handler);
  int a = 0;
  a = a / 0;


}

void div0handler()
{
  printf("Caught a SIGFPE\n");
  exit(1);  
}