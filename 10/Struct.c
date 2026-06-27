#include <stdio.h>
#include <string.h>

#define STRSIZ 30

struct book_t{
	char Book_name[STRSIZ];
	char Author[STRSIZ];
	int pages;
};

void print_book(struct book_t b1){
	printf("Book Title: %s, Author: %s, pages: %d\n", b1.Book_name, b1.Author, b1.pages); 
}

int main() {

	struct  book_t b1;

	printf("Enter the Book Title: ");
	fgets(b1.Book_name, sizeof(b1.Book_name), stdin);
	b1.Book_name[strlen(b1.Book_name) -1 ] = '\0';

	printf("Enter the Author Name: ");
	fgets(b1.Author, sizeof(b1.Author), stdin);
	b1.Author[strlen(b1.Author) - 1] = '\0';

	printf("Enter the number of Pages: ");
	scanf("%d", &b1.pages);

	print_book(b1);

	return 0;
}


	
