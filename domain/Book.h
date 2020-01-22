//
// Created by Guber on 22.01.20.
//

#ifndef IBB_BASICS_P1_BOOK_H
#define IBB_BASICS_P1_BOOK_H


#include <string>


/*
   - const string& getName(); – Rückgabewert darf nicht verändert werden.
   - void print(const string& msg); –Der Parameterwird in der Funktion nicht verändert.
   - void Widget::drawYourself() const; – Die Methode verändert ihr Objekt nicht.
*/

struct Book {
private:
    std::string author_;
    std::string publisher_;
    std::string isbn_;
    std::string volume_;
    std::string title_;
    std::string year_;
public:
    Book(const std::string &author = "", const std::string &publisher = "",
         const std::string &isbn = "", const std::string &volume = "", const std::string &title = "",
         const std::string &year = "");

    void setAuthor(const std::string &author);

    void setPublisher(const std::string &publisher);

    void setIsbn(const std::string &isbn);

    void setVolume(const std::string &volume);

    void setTitle(const std::string &title);

    void setYear(const std::string &year);

    const std::string &getAuthor() const;

    const std::string &getPublisher() const;

    const std::string &getIsbn() const;

    const std::string &getVolume() const;

    const std::string &getTitle() const;

    const std::string &getYear() const;
};


#endif //IBB_BASICS_P1_BOOK_H
