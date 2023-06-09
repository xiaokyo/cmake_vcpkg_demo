// #include <iostream>
#include <crow.h>

#include "./src/Person.h"

using namespace std;

int main(int argc, const char *argv[])
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")
    ([]()
     { return "Hello world"; });

    CROW_ROUTE(app, "/hello/<int>")
    ([](int count)
     {
    if (count > 100) {
        std::ostringstream os;
        Person *p = new Person(10);
        p->print();
        return crow::response(400);
    }
    std::ostringstream os;
    os << count << " bottles of beer!";
    return crow::response(os.str()); });

    app.port(18080).multithreaded().run();
    return 0;
}