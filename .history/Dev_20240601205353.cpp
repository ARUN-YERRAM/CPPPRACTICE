thread_local Observed<std::vector<std::string>> names =
    std::vector<std::string>{"John", "Jane", "Joe", "Jill"};
thread_local std::string name;

return div{
    style = Style{
        "display"_style = "flex",
        "flex-direction"_style = "column",
        "gap"_style = "5px",
    }
}(
    div{
        style = Style{
            "display"_style = "flex",
            "gap"_style = "5px",
        }
    }(
        input{
            id = "attributeInput",
            class_ = "form-control",
            type = "text",
            onInput = [](auto const& event) {
                name = event["target"]["value"].template as<std::string>();
            }
        }(),
        button{
            onClick = [](){
                names.push_back(name);
            },
            class_ = "btn btn-primary"
        }("Add Name")
    ),
    table{}(
        thead{}(
            tr{}(
                th{}(""),
                th{}("Number"),
                th{}("Name")
            )
        ),
        tbody{}(
            // range indicates that the following ElementRenderer
            // is to be rendered for each item.
            range(names),
            [](long i, auto const& name) {
                return tr{}(
                    td{}(
                        button{
                            onClick = [i](){
                                names.erase(names.begin() + i);
                            },
                            class_ = "btn btn-danger"
                        }("X")
                    ),
                    td{}(std::to_string(i)), 
                    td{}(name)
                );
            }
        )
    )
);

