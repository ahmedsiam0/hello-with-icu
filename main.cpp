#include <iostream>
#include <unicode/ustream.h>
#include <unicode/resbund.h>
#include <unicode/locid.h>

int main() {
    icu::Locale system_local {};
    UErrorCode status = U_ZERO_ERROR;

    icu::ResourceBundle my_resource("./locales", system_local.getName(), status);

    if(U_SUCCESS(status)) {
        icu::ResourceBundle hello_message = my_resource.get("hello_message", status);
        std::cout << hello_message.getString(status) << std::endl;
    } else {
        std::cout << status << '\n' << "Error!" << std::endl;
    }
}