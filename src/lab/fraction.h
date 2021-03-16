#ifndef TASK1_FRACTION_H
#define TASK1_FRACTION_H

#include <iosfwd>
#include <string>

/**
Zaimplementuj podaną na zajęciach klasę reprezentującą Ulamek (ang. Fraction), zawierającą:
    licznik (ang. numerator) i mianownik (ang. denominator), proszę aby były protected
    konstruktor bezparametrowy, który ustawi wartości licznika i mianownika
    konstruktor z parametrami (część z wartością domyślną), który ustawi licznik i mianownik na podstawie parametrów,
        wartością domyślną dla mianownika ma być 1
    zadany zestaw metod dostępowych/modyfikujących obiekty klasy -tzw. gettery i settery,
        które umożliwią modyfikacje i pobranie wartości licznika i mianownika
    metodę print(), wypisującą atrybuty obiektu na konsolę w formie licznik/mianownik\n

    zadany atrybut (removedFractions_) i metodę statyczną: removedFractions().
        Skladowa ta powinna byc incrementowana w destruktorze

     Proszę o utworzenie 3 stałych w klasie i metod do odczytu (tzn. getterów):
            nazwa ułamka jako string
                metoda: getFractionName()
            stała statyczna odzwierciedlajaca niedopuszczalna wartość mianownika: (ang. invalidDenominatorValue)
                metoda: getInvalidDenominatorValue()
            statyczna stała czasu kompilacji (constexpr) odzwierciedlajaca domyślna wartość mianownika: (ang. defaultDenominatorValue)
                metoda: getDefaultDenominatorValue()




    Dodaj do klasy metody zapisz(ostream& os)/wczytaj(istream& is),
        zapisujące/odczytujące zawartość obiektu do przekazanego jako parametr strumienia wyjściowego/wejściowego,
        w formacie "licznik/mianownik". Metoda wczytująca może założyć, że format danych będzie poprawny
        (nie trzeba obslugiwac bledow).





**/

constexpr bool classFractionExists = true;
constexpr bool hasNumeratorAndDenominator = true;
constexpr bool hasConstructorWhichInitialiseFields = true;
constexpr bool hasGettersAndSetters = true;
constexpr bool hasPrintFunction = true;
constexpr bool counterOfDestructedFractionsImplemented = true;
constexpr bool readWriteImplemented = false;
constexpr bool fractionNameSettableFromConstructor = true;
constexpr bool fractionConstStaticFieldsImplemented = true;

class Fraction {
protected:
    int numerator;
    int denominator;
    static int removedFractions_;
    std::string fractionName;

    static constexpr int invalidDenominatorValue {0};
    static constexpr int defaultDenominatorValue {1};


public:

    // constructors
    Fraction(): numerator {0},denominator {1} {}

    Fraction(int num, int denom): numerator {num},denominator {denom} {}

    Fraction(int num, int denom, std::string name): numerator {num},denominator {denom}, fractionName {name} {}

    ~Fraction(){
        removedFractions_++;
    }

    // setters and getters
    static int getInvalidDenominatorValue(){
        return invalidDenominatorValue;
    }
    static int getDefaultDenominatorValue(){
        return defaultDenominatorValue;
    }

    int getNumerator() {
        return numerator;
    }

    int getDenominator() {
        return denominator;
    }

    void setNumerator(int s) {
        numerator = s;
    }

    void setDenominator(int s) {
        denominator = s;
    }

    void print() const {
        std::string result = std::to_string(numerator) + "/" + std::to_string(denominator);
        std::cout << result;
    }

    static int removedFractions() {
        return removedFractions_;
    }

    void save(ostream& os){
        int a,b;
        os << a;
        os << b;
        numerator = a;
        denominator = b;
    }

    void load(istream& is){

    }

    std::string getFractionName(){
        return fractionName;
    }


};


#endif // TASK1_FRACTION_H
