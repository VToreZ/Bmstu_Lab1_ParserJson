#include "Json.h"


int main() {
        string text;
        text = R"({ "lastname" : "Ivanov" , "firstname" : "Ivan" , "age" : 25,"islegal" : false,"marks" : [ 4 , 5 , 5 , 5 , 2 , 3 ],"address" : {  "city" : "Moscow" ,  "street" : "Vozdvijenka" } })";
	      Json object = Json::parse(text);
	      cout << std::endl;
	      object.print_map();

    return 0;
}
