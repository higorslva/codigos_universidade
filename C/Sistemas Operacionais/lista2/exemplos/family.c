#include <stdio.h>

int main()
{
    struct person {
        char name[32];
        int age;
        float weight;
    };
    struct person family_in[] = {
        { "Dad", 42, 460.1 },
        { "Mom", 40, 120.0 },
        { "Junior", 15, 150.6 },
        { "Missy", 12, 80.2 },
        { "Baby", 1, 33.9 }
    };
    struct person family_out[5];
    int x;
    const char filename[] = "family.data";
    FILE *fp;
    
    /* open/create the file */
    fp = fopen(filename,"w");
    if( fp == NULL)
    {
        fprintf(stderr,"Unable to create %s\n",filename);
        return(1);
    }

    /* write the array and display its contents */
    puts("Writing Data:");
    for(x=0;x<5;x++)
    {
        printf("%s is %d and wieghs %.1f\n",
                family_in[x].name,
                family_in[x].age,
                family_in[x].weight
              );
        fwrite(&family_in[x],sizeof(struct person),1,fp);
    }
    fclose(fp);

    /* open the file to read in the data */
    puts("Reading Data:");
    fp = fopen(filename,"r");
    if( fp == NULL)
    {
        fprintf(stderr,"Unable to access %s\n",filename);
        return(1);
    }

    for(x=0;x<5;x++)
    {
        fread(&family_out[x],sizeof(struct person),1,fp);
        printf("%s is %d and wieghs %.1f\n",
                family_out[x].name,
                family_out[x].age,
                family_out[x].weight
              );
    }
    fclose(fp);

    return(0);
}
