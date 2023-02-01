void copy_string(char *new, char *old)
{
   while(*old)
   {
      *new = *old;
      old++;
      new++;
   }
   *new = '\0';
}
