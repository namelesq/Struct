#include <iostream>
#include<vector>
#include <algorithm>
#include<string>
struct Book {
    std::string title;
    std::string author;
    std::string publisher;
    std::string genre;
};
void editBook(Book& book) {
    std::cout << "Enter new title: ";
    std::cin >> book.title;
    std::cout << "Enter new author: ";
    std::cin >> book.author;
    std::cout << "Enter new publisher: ";
    std::cin >> book.publisher;
    std::cout << "Enter new genre: ";
    std::cin >> book.genre;
}
void printBooks(std::vector<Book>& books) {
    for (const Book& book : books) {
        std::cout << "Title: " << book.title;
        std::cout << "Author: " << book.author;
        std::cout << "Publisher: " << book.publisher;
        std::cout << "Genre: " << book.genre;
    }
}
void searchByAuthor(std::vector<Book>& books, const std::string& author) {
    for (const Book& book : books) {
        if (book.author == author) {
            std::cout << "Title: " << book.title;
            std::cout << "Author: " << book.author;
            std::cout << "Publisher: " << book.publisher;
            std::cout << "Genre: " << book.genre;
        }
    }
}
void searchByTitle(std::vector<Book>& books, const std::string& title) {
    for (const Book& book : books) {
        if (book.title == title) {
            std::cout << "Title: " << book.title;
            std::cout << "Author: " << book.author;
            std::cout << "Publisher: " << book.publisher;
            std::cout << "Genre: " << book.genre;
        }
    }
}
bool compareByTitle(const Book& book1, const Book& book2) {
    return book1.title < book2.title;
}
bool compareByAuthor(const Book& book1, const Book& book2) {
    return book1.author < book2.author;
}
bool compareByPublisher(const Book& book1, const Book& book2) {
    return book1.publisher < book2.publisher;
}
int main() {
    std::vector<Book> books = {
        {"Title1", "Author1", "Publisher1", "Genre1"},
        {"Title2", "Author2", "Publisher2", "Genre2"},
        {"Title3", "Author3", "Publisher3", "Genre3"},
        {"Title4", "Author4", "Publisher4", "Genre4"},
        {"Title5", "Author5", "Publisher5", "Genre5"},
        {"Title6", "Author6", "Publisher6", "Genre6"},
        {"Title7", "Author7", "Publisher7", "Genre7"},
        {"Title8", "Author8", "Publisher8", "Genre8"},
        {"Title9", "Author9", "Publisher9", "Genre9"},
        {"Title10", "Author10", "Publisher10", "Genre10"}
    };
    editBook(books[0]);
    printBooks(books);
    searchByAuthor(books, "Author2");
    searchByTitle(books, "Title5");
    std::sort(books.begin(), books.end(), compareByTitle);
    printBooks(books);
    std::sort(books.begin(), books.end(), compareByAuthor);
    printBooks(books);
    std::sort(books.begin(), books.end(), compareByPublisher);
    printBooks(books);
    return 0;
}