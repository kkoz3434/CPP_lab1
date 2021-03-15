#ifndef PROGRAMMERS_DETAILS_H
#define PROGRAMMERS_DETAILS_H

#if __cplusplus < 201103L && !defined(_MSC_FULL_VER)
    #error C++11 or greater is required!
#endif

namespace StudentsInfo
{
    constexpr const char* const FIRSTNAME = "Jakub";
    constexpr const char* const SURNAME   = "Koźlak";

    constexpr const char* const MAIL    = "jkozlak@student.agh.edu.pl";
    constexpr const char* const BOOK_ID = "401144";

    constexpr const char* const SUGGESTED_SONG_DURING_CHECKING = ""; // optional

    void validateStudentsInfo();

    constexpr const char* const teacherMail = "bazior[at]agh.edu.pl"; // change if not correct
}

#endif // PROGRAMMERS_DETAILS_H
