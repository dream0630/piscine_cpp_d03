#ifndef PARTS_H_
# define PARTS_H_

#include <string>

class Arms
{
public:
    explicit Arms(std::string const& serial = "A-01", bool functionnal = true);
    virtual ~Arms() {}

    bool isFunctionnal() const;
    std::string const& serial() const;
    void informations() const;
private:
    std::string _serial;
    bool _functionnal;
};

class Legs
{
public:
    explicit Legs(std::string const& serial = "L-01", bool functionnal = true);
    virtual ~Legs() {}

    bool isFunctionnal() const;
    std::string const& serial() const;
    void informations();
private:
    std::string _serial;
    bool _functionnal;
};

class Head
{
public:
    explicit Head(std::string const& serial = "H-01", bool functionnal = true);
    virtual ~Head() {}

    bool isFunctionnal() const;
    std::string const& serial() const;
    void informations() const;
private:
    std::string _serial;
    bool _functionnal;
};

#endif
