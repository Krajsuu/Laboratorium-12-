#ifndef LIBEXCEPTIONS_H
#define LIBEXCEPTIONS_H

#include <iostream>
#include <exception>

/**
 * @brief Klasa bazowa dla niestandardowych wyj¹tków.
 *
 * @param message Wiadomoœæ opisuj¹ca wyj¹tek.
 */
class MyExceptions : public std::exception {
private:
    std::string message;
public:
    /**
     * @brief Konstruktor inicjalizuj¹cy wiadomoœæ wyj¹tku.
     *
     * @param msg Wiadomoœæ wyj¹tku.
     */
    MyExceptions(const std::string msg) : message(msg) {}

    /**
     * @brief Zwraca wiadomoœæ wyj¹tku.
     *
     * @return const char* Wiadomoœæ wyj¹tku.
     */
    virtual const char* what() const noexcept override {
        return message.c_str();
    }
};

/**
 * @brief Wyj¹tek zg³aszany, gdy nie mo¿na znaleŸæ pliku.
 */
class FileNotFound : public MyExceptions {
public:
    FileNotFound() : MyExceptions("Nie znaleziono pliku") {}
};

/**
 * @brief Wyj¹tek zg³aszany w przypadku b³êdu wejœcia/wyjœcia.
 */
class IOError : public MyExceptions {
public:
    IOError() : MyExceptions("Blad wejscia/wyjscia") {}
};

/**
 * @brief Wyj¹tek zg³aszany w przypadku b³êdu alokacji pamiêci.
 */
class BadAlloc : public MyExceptions {
public:
    BadAlloc() : MyExceptions("Blad alokacji pamieci") {};
};

/**
 * @brief Wyj¹tek zg³aszany, gdy nast¹pi wyjœcie poza zakres.
 */
class OutOfRange : public MyExceptions {
public:
    OutOfRange() : MyExceptions("Wyjscie poza zakres") {}
};

/**
 * @brief Wyj¹tek zg³aszany, gdy wielkoœæ jest ujemna.
 */
class NegativeSize : public MyExceptions {
public:
    NegativeSize() : MyExceptions("Ujemna wielkosc") {}
};

/**
 * @brief Wyj¹tek zg³aszany, gdy argument jest niepoprawny.
 */
class InvalidArgument : public MyExceptions {
public:
    InvalidArgument() : MyExceptions("Nie poprawny argument") {}

    /**
     * @brief Konstruktor umo¿liwiaj¹cy przekazanie niestandardowej wiadomoœci.
     *
     * @param msg Wiadomoœæ wyj¹tku.
     */
    InvalidArgument(std::string msg) : MyExceptions(msg) {}
};

/**
 * @brief Wyj¹tek zg³aszany, gdy wyst¹pi b³¹d otwarcia pliku.
 */
class FileOpenError : public MyExceptions {
public:
    FileOpenError() : MyExceptions("Blad otwarcia pliku") {}
};

/**
 * @brief Wyj¹tek zg³aszany, gdy rozszerzenie pliku jest niepoprawne.
 */
class InvalidFileExtention : public MyExceptions {
public:
    InvalidFileExtention() : MyExceptions("Bledne rozszerzenie pliku") {}
};

/**
 * @brief Wyj¹tek zg³aszany, gdy plik jest pusty.
 */
class EmptyFile : public MyExceptions {
public:
    EmptyFile() : MyExceptions("Pusty plik") {}

    /**
     * @brief Konstruktor umo¿liwiaj¹cy przekazanie niestandardowej wiadomoœci.
     *
     * @param msg Wiadomoœæ wyj¹tku.
     */
    EmptyFile(std::string msg) : MyExceptions(msg) {}
};

#endif // LIBEXCEPTIONS_H
