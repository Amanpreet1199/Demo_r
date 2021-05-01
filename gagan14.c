# include<stdio.h>
# include<conio.h>
struct book
{
	char book_name[20];
	char author_name[20];
	int price;
};
int main()
{
	FILE *fp;
	struct book s;
	char ch;
	fp = fopen("F:\\demo.txt","r");
	if(fp==NULL)
	{
		printf("the file does not exist");	
	}
	while(1)
	{
		fscanf(fp,"%s %s %d",&s.author_name,&s.book_name,&s.price);
		printf("%s %s %d",s.author_name,s.book_name,s.price);
		if(fscanf(fp,"%s %s %d",&s.author_name,&s.book_name,&s.price)==EOF)
			break;
	}
	fclose(fp);
	return 0;
}
