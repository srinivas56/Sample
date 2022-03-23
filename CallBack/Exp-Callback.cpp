#include<iostream>
#include<functional>

class If1BaseClient
{
    public:
        virtual void connect () = 0;

};

class If1BaseObserver
{
    public:
        void onTransportChanged()
        {
            
        }

        virtual void setOnConnected(const std::function<void()>& fun) = 0;
};

class PairingClient : public If1BaseClient, public If1BaseObserver
{
    protected:
        std::function<void()> m_fun;
    public:
        void connect() override
        {
            for(int i =0 ; i<10000 ; i++)
                ;
            m_fun();
        }

        void setOnConnected(const std::function<void()>& fun) override
        {
            m_fun = fun ;
        }
};


int main()
{
    bool connect = false;
    PairingClient pairingClient;
    std::cout << "Connect Before = " << connect << std::endl;
    pairingClient.setOnConnected([&](){
        connect = true;
        std::cout << " I am connected. " << std::endl;
    });
    std::cout << "Connect Before calling Connect = " << connect << std::endl;
    pairingClient.connect();
    std::cout << "Connect After = " << connect << std::endl;

}