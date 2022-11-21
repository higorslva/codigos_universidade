#include <stdio.h>

int main()
{
	struct person {
		char name[32];
		int age;
		float weight;
	} familymember;
	const char filename[] = "family.data";
	FILE *fp;
	int record = 0;

	/* obtain and test input */
	while( record<1 || record>5)
	{
		printf("Fetch which record (1 to 5)? ");
		scanf("%d",&record);
	}

	/* open the file */
	fp = fopen(filename,"r");
	if( fp == NULL )
	{
		fprintf(stderr,"Unable to read %s\n",filename);
		return(1);
	}

	/* set the file position indiator to the desired record */
	fseek(fp, (record-1)*sizeof(struct person), SEEK_SET);

	/* read and output the record */
	fread(&familymember,sizeof(struct person),1,fp);
	printf("Record %d:\nName: %s\nAge: %d\nWeight: %.1f\n",
			record,
			familymember.name,
			familymember.age,
			familymember.weight
		  );

	/* close the file */
	fclose(fp);

	return(0);
}

