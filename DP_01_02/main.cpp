#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "sqlselectquerybuilder.h"

int main()
{
    SqlSelectQueryBuilder query_builder;
    
    query_builder.AddColumns({"name", "phone"});
    query_builder.AddFrom("classrooms");
    query_builder.AddFrom("students");
    query_builder.AddWhere({ {"id", "42"}, {"name", "John"} });
    
    const std::string expected_query = "SELECT name, phone FROM students WHERE id=42 AND name=John;";
    std::string build_query = query_builder.BuildQuery();
    std::cout << (build_query == expected_query ? "Ok" : build_query) << std::endl;
    
    return 0;
}
