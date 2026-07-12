#include<iostream>
#include<string>
using namespace std;


class Idevice{
    private:
    string Device;
    public:
    Idevice(const string& device):Device(device){}
    virtual void displayDevice(){
        cout << "Device: " <<Device <<endl;
    }
    void getDevice(){
        cout << Device << endl;
    }
};
class TV: public Idevice{
    public:
    TV():Idevice("TV"){}
    void displayDevice() override{
        cout << "TV" <<endl;
    }
};

void GetDeviceName(Idevice* device){
    device->displayDevice();
}
int main(){
    Idevice* device = new Idevice("Default Device");
    device->displayDevice();
    device->getDevice();
    TV* tv = new TV();
    tv->displayDevice();
    tv->getDevice();
    GetDeviceName(tv);
    device = tv; 
    device->displayDevice();
    Idevice* device1 = new TV();
    device1->displayDevice();


}