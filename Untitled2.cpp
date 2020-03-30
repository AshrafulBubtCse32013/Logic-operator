
#include<stdio.h>

int main()
{
    int x,y,z1,z2,z3,z4,z5,z6,z7,z8;

    int k=1;

    while(k<=4)
    {
        k++;
        printf("Enter the Value of X and Y: ");
        scanf("%d %d",&x,&y);
        FILE *ptr_file;
        FILE *ptr_file1;
        FILE *ptr_file2;
        FILE *ptr_file3;
        FILE *ptr_file4;
        FILE *ptr_file5;
        FILE *ptr_file6;
        FILE *ptr_file7;
        FILE *ptr_file8;

        if (x==0&&y==0)
        {



            ptr_file1 =fopen("Gand.txt", "w");
            ptr_file2 =fopen("Gor.txt", "w");
            ptr_file3 =fopen("Gnand.txt", "w");
            ptr_file4 =fopen("Gnor.txt", "w");
            ptr_file5 =fopen("Gexor.txt", "w");
            ptr_file6 =fopen("Gexnor.txt", "w");
            ptr_file7 =fopen("Gnot1.txt", "w");
            ptr_file8 =fopen("Gnot2.txt", "w");

            z1=x&&y;
            z2=x||y;
            z3=!(x&&y);
            z4=!(x||y);
            z5=x^y;
            z6=!(x^y);
            //z7=!x;
            //z8=!y;
            fprintf(ptr_file1,"\n\n x=%d y=%d value for AND gate=%d\n",x,y,z1);
            fprintf(ptr_file2,"\n x=%d y=%d value for OR gate=%d\n",x,y,z2);
            fprintf(ptr_file3,"\n x=%d y=%d value for NAND gate=%d\n",x,y,z3);
            fprintf(ptr_file4,"\n x=%d y=%d value for NOR gate=%d\n",x,y,z4);
            fprintf(ptr_file5,"\n x=%d y=%d value for EX_OR gate=%d\n",x,y,z5);
            fprintf(ptr_file6,"\n x=%d y=%d value for EX_NOR gate=%d\n",x,y,z6);
            //fprintf(ptr_file7,"\n x=%d value for NOT gate=%d\n",x,z7);
            //fprintf(ptr_file8,"\n y=%d value for NOT gate=%d\n%",y,z8);



        }

        else if (x==0&&y==1)
        {
            z1=x&&y;
            z2=x||y;
            z3=!(x&&y);
            z4=!(x||y);
            z5=x^y;
            z6=!(x^y);
            z7=!x;
            z8=!y;

            fprintf(ptr_file1,"\n\n x=%d y=%d value for AND gate=%d\n",x,y,z1);
            fprintf(ptr_file2,"\n x=%d y=%d value for OR gate=%d\n",x,y,z2);
            fprintf(ptr_file3,"\n x=%d y=%d value for NAND gate=%d\n",x,y,z3);
            fprintf(ptr_file4,"\n x=%d y=%d value for NOR gate=%d\n",x,y,z4);
            fprintf(ptr_file5,"\n x=%d y=%d value for EX_OR gate=%d\n",x,y,z5);
            fprintf(ptr_file6,"\n x=%d y=%d value for EX_NOR gate=%d\n",x,y,z6);
            fprintf(ptr_file7,"\n x=%d value for NOT gate=%d\n",x,z7);
            fprintf(ptr_file8,"\n y=%d value for NOT gate=%d\n%",y,z8);
        }


        else if (x==1&&y==0)
        {
            z1=x&&y;
            z2=x||y;
            z3=!(x&&y);
            z4=!(x||y);
            z5=x^y;
            z6=!(x^y);
            z7=!x;
            z8=!y;

            fprintf(ptr_file1,"\n\n x=%d y=%d value for AND gate=%d\n",x,y,z1);
            fprintf(ptr_file2,"\n x=%d y=%d value for OR gate=%d\n",x,y,z2);
            fprintf(ptr_file3,"\n x=%d y=%d value for NAND gate=%d\n",x,y,z3);
            fprintf(ptr_file4,"\n x=%d y=%d value for NOR gate=%d\n",x,y,z4);
            fprintf(ptr_file5,"\n x=%d y=%d value for EX_OR gate=%d\n",x,y,z5);
            fprintf(ptr_file6,"\n x=%d y=%d value for EX_NOR gate=%d\n",x,y,z6);
            fprintf(ptr_file7,"\n x=%d value for NOT gate=%d\n",x,z7);
            fprintf(ptr_file8,"\n y=%d value for NOT gate=%d\n%",y,z8);

            //fclose(ptr_file);

        }


        else if (x==1&&y==1)
        {


            z1=x&&y;
            z2=x||y;
            z3=!(x&&y);
            z4=!(x||y);
            z5=x^y;
            z6=!(x^y);
            //z7=!x;
            //z8=!y;

            fprintf(ptr_file1,"\n\n x=%d y=%d value for AND gate=%d\n",x,y,z1);
            fprintf(ptr_file2,"\n x=%d y=%d value for OR gate=%d\n",x,y,z2);
            fprintf(ptr_file3,"\n x=%d y=%d value for NAND gate=%d\n",x,y,z3);
            fprintf(ptr_file4,"\n x=%d y=%d value for NOR gate=%d\n",x,y,z4);
            fprintf(ptr_file5,"\n x=%d y=%d value for EX_OR gate=%d\n",x,y,z5);
            fprintf(ptr_file6,"\n x=%d y=%d value for EX_NOR gate=%d\n",x,y,z6);
            //fprintf(ptr_file7,"\n x=%d value for NOT gate=%d\n",x,z7);
            //fprintf(ptr_file8,"\n y=%d value for NOT gate=%d\n%",y,z8);





            fclose(ptr_file1);
            fclose(ptr_file2);
            fclose(ptr_file3);
            fclose(ptr_file4);
            fclose(ptr_file5);
            fclose(ptr_file6);
            fclose(ptr_file7);
            fclose(ptr_file8);



        }


    }
    return  0;
}
