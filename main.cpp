#include "crow.h"

const int DEFAULT_PORT = 18080;

int main()
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([](){
        auto page = crow::mustache::load_text("home.html");

        return page;
    });

    CROW_ROUTE(app, "/about")([](){
        auto page = crow::mustache::load_text("about.html");

        return page;
    });

    CROW_ROUTE(app, "/hello/<string>")([](std::string name){
        auto page = crow::mustache::load("hello_person.html");
        crow::mustache::context ctx ({{"person", name}});
        return page.render(ctx);
    });

    CROW_ROUTE(app, "/hello/")([](){
        auto page = crow::mustache::load_text("hello.html");

        return page;
    });

    app.port(DEFAULT_PORT).multithreaded().run();
}
