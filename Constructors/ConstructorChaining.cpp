#include<iostream>
#include<string>
using namespace std;


class Idevice{
    private:
    string Device;
    public:
    Idevice(const string& device):Device(device){}
    void displayDevice(){
        cout << "Device: " <<Device <<endl;
    }
    void getDevice(){
        cout << Device << endl;
    }
};
class TV: public Idevice{
    public:
    TV():Idevice("TV"){}
    void displayDevice(){
        cout << "TV" <<endl;
    }
};

class Remote: public TV{
    public:
    void displayDevice(){
        cout << "Remote" <<endl;
    }
};

int main(){
    Idevice* device = new Idevice("Default Device");
    device->displayDevice();
    device->getDevice();
    TV* tv = new TV();
    tv->displayDevice();
    tv->getDevice();
    Remote* remote = new Remote();
    remote->displayDevice();
    remote->getDevice();

}