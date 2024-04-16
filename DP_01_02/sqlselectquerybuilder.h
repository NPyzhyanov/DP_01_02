#ifndef SQLSELECTQUERYBUILDER_H
#define SQLSELECTQUERYBUILDER_H

class SqlSelectQueryBuilder
{
public:
    SqlSelectQueryBuilder();
    ~SqlSelectQueryBuilder() = default;
    
    SqlSelectQueryBuilder& AddColumn(std::string column_name);    
    SqlSelectQueryBuilder& AddColumns(const std::vector<std::string> &columns) noexcept;
    SqlSelectQueryBuilder& AddFrom(std::string table_name);
    SqlSelectQueryBuilder& AddWhere(std::string condition_l_value, std::string condition_r_value);
    SqlSelectQueryBuilder& AddWhere(const std::map<std::string, std::string> &kv) noexcept;
    
    const std::string BuildQuery();
    
private:
    bool select_statement_as_default;
    const std::string default_select_statement = "*";
    bool from_statement_got;
    
    std::string select_statement;
    std::string from_statement;
    std::string where_condition;
    
};

#endif // SQLSELECTQUERYBUILDER_H
