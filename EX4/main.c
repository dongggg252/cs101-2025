
#include <stdio.h>

int main()
{
   FILE* fp;
   int i = 0;
   int a[3] = {0,1,2};
   char b[4] = "ABC";
   float c[3] = {1.1,1.2,1.3};
   int ra[3];
   char rb[4];
   float rc[3];
   fp = fopen("a.bin","wb+");
   fwrite(a,sizeof(int),3,fp);
   fwrite(b,sizeof(char),3,fp);
   fwrite(c,sizeof(float),3,fp);
   fseek(fp,0,SEEK_SET);
   fread(ra,sizeof(int),3,fp);
   fread(rb,sizeof(char),3,fp);
   fread(rc,sizeof(float),3,fp);
   for (i=0;i<3;i++) {
       printf("%d ",ra[i]);
   }
   printf("\n");
   printf("%s ",rb);
   printf("\n");
   for (i=0;i<3;i++) {
       printf("%.1f ",rc[i]);
   }
   printf("\n");
   
   


    return 0;
}

}
