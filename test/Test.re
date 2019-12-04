let () = {
    open Main;
    open RznUnit;

    "Test" >@@> [
        "Get Main Message" @> () => StringAssert.equal("Hello, ReasonML!", message),
    ];
};