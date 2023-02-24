
//logical operators

int main()
{
  int a = 1, b = 2;
   
  if (a > 0 && b > 0)
  {
    printf("Both values are greater than 0\n");
  }
  else
  {
    printf("Both values are less than 0\n");
  }
}

int main()
{
  int a = -5, b = 2;
   
  if (a > 0 || b > 0)
  {
    printf("Any one of the given value is "
           "greater than 0\n");
  }
  else
  {
    printf("Both values are less than 0\n");
  }
  return 0;
}

int main()
{
  int a = 10, b = 20;
   
  if (!(a > 0 and b > 0))
  {
 
    printf("Both values are greater than 0\n");
  }
  else
  {
    printf("Both values are less than 0\n");
  }
  return 0;
}


int main()
{
  int a = 11, b = 11;
  printf("%d\n",a^b);
  return 0;
}