#pragma once


namespace JS::Bytecode{

class Instruction{
public:
    virtual ~Instruction(){}
    virtual String to_string() const = 0;
    virtual void execute(Bytecode::Interpreter) const = 0;
private:

};

}