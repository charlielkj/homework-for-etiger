#include <stdlib.h>
    #include <stdio.h>
    int main ()
    {
        FILE * fpPhoto, * fpText, * fpTarget ;
        int     iRead ;
        char    szBuf[100] ;
        printf ("请输入第一个文件名（bmp）:\n") ;
        gets (szBuf) ;
        fpPhoto = fopen (szBuf, "rb") ;
        printf ("请输入第二个文件名（txt）:\n") ;
        gets (szBuf) ;
        fpText = fopen (szBuf, "rb") ;
        printf ("请输入目的文件名（bmp）:\n") ;
        gets (szBuf) ;
        fpTarget = fopen (szBuf, "wb") ;
       
        if (!fpPhoto || !fpText || !fpTarget)
        {
            printf ("打开文件失败！\n") ;
            system("pause") ;
            return -1 ;
        }
       
        while ((iRead = fread (szBuf, 1, sizeof (szBuf), fpPhoto)) > 0)
            fwrite (szBuf, 1, iRead, fpTarget) ;
        while ((iRead = fread (szBuf, 1, sizeof (szBuf), fpText)) > 0)
            fwrite (szBuf, 1, iRead, fpTarget) ;
       
        fclose (fpPhoto) ;
        fclose (fpText) ;
        fclose (fpTarget) ;
        return 0 ;
    }