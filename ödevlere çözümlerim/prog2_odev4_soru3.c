#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv [])
{
  FILE* fp = NULL;
  int nfiles = argc-1; /* programın kendi adını görmezden geliniz. */
  int argidx = 1; /* programın kendi adını görmezden geliniz. */
  char* currfile ;
  int c, eski_c;
  /* kelime sayısı, satır sayısı, karakter sayısı */
  unsigned long nw = 0, nl = 0, nc = 0;
  if (nfiles == 0)
  {
      fp = stdin; /* standart girdi */
      nfiles++;
  }
  else /* set to first */
  {
      currfile = argv[argidx++];
      fp = fopen(currfile, "r");
  }
  while(nfiles > 0) /* kalan_dosyalar >0 */
  {
      if( fp == NULL)
      {
          fprintf(stderr, "\n Dosya okunamadı ! \n");
          exit( -1 );
      }
      nl  = nw = 1; 
      nc = 0;     
      while((c = getc(fp)) != EOF)
      {
         nc++; /* karakter sayısını 1 artır */
         switch(c)
         {
          case ' ':  /* satır sayacını 1 artır */
              if ( eski_c != ' ' ) /*her boslukta kelimeyi arttırmaması için  */
                nw++; /* kelime sayacını 1 artır */
                break; 
          case '\n':
              nl++;
              break;
         }

         eski_c=c;
      }
      printf("\nsatır: %ld\nkelime: %ld\nharf: %ld\ndosya adı: %s \n",nl,nw,nc, currfile);
      /* varsa sonraki dosya */
      if( nfiles > 0)
      {
        currfile = argv[argidx++];
        fp = fopen(currfile, "r");
      }
  return 0;
  }
}