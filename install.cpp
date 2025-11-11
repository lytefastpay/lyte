#include <iostream>


#define LOCAL_MACHINE = 1;


int main(int argc, char *argv[]){


    char local_machine[] = "LOCAL_MACHINE";
    char local_server[] = "LOCAL_SERVER";
    char local_ip_addr[] ="LOCAL_IP_ADDR";
    bool machine_accepts = true;
    if(machine_accepts){
        std::cout << "Installing..." <<std::endl;
        system("git clone https://github.com/lytefastpay/lyte.git"); //install from github
    }



    return 0;


}
