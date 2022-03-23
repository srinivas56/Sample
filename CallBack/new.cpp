#include <iostream>
#include <string>
#include <functional>

class Data
{
    using ClientCallback = std::function<void()>;
    ClientCallback m_onconnected;

public:
    void setOnConnected(const ClientCallback &fun)
    {
        m_onconnected = fun;
    }

    void connect()
    {
        for (int i = 0; i < 10000; i++)
            ;
        m_onconnected();
    }
};

int main()
{
    Data d;
    bool connect = false;
    std::cout << "Connect status before " << connect << std::endl;

    d.setOnConnected([&]()
                     { connect = true; });

    d.connect();

    std::cout << "Connect status After " << connect << std::endl;

    return 0;
}