///this is a free software developed by victor bassey sunday/////
///the mainstream chain for blockchain///


#include <iostream>
#include <random>
#include <cmath>
#include <fstream>
//#include <"lib/holyC/tit.hc">
#include "lib/logo.h"

//load some holy c modules
#define ALLOW_HOLY_C = 0;
//////////////////////////

class AddCheckSums{

public:

    double load_network;
    double load_network_node;
    double load_network_aggregator;


    void aggregator(){

        load_network_aggregator = 10;

    }

};


void start_up(){


    std::cout << "Network up chain is starting up" << std::endl;
    system("sleep 3");
    std::cout << "Waiting to generate hashing" << std::endl;
    system("sleep 3");
    std::cout << "Waiting to generate network name" << std::endl;
    system("sleep 3");
    std::cout << "Waiting to generate network node" << std::endl;
    system("sleep 3");
    std::cout <<"************************************************"<<std::endl;
    std::cout <<"************************************************"<<std::endl;








};



void boot_upServices(std::string moduleName){

    std::string checkModuleName = moduleName;
    std::cout << checkModuleName << std::endl;

};


struct NetworkAttributes{
    std::string load_network;
    double load_network_node;
    double load_network_aggregator;
    int load_single_state;
};



using namespace std;


int main(int argc, char *argv[]){

robot_makeLogo();

bool fst_stat=true;
bool fst_err=false;


//AddCheckSums loads here**********
AddCheckSums checks;

checks.aggregator();
////////////////////////////////


while(fst_stat<3){
    switch(fst_stat){
    case 1:
    //return 0; //stop compiling
    int case_startUp = 1;
    if (case_startUp){

        NetworkAttributes NT;
        //network attr
        bool check_state = true;
        //state
        bool check_failure = false;
        //state
        int load_single_state = 1;
        //network load state will be set to 1
        if(check_state ||  load_single_state){
        NT.load_single_state = 100000000; //load_single_state is good
        NT.load_network = "Lyte ON CHAIN";
        NT.load_network_node = 36; // 36 bit processor on X64 bit generator machine
         start_up();
        std::cout << "Hash generated:" <<&NT.load_single_state <<std::endl;
        system("sleep 3");
        std::cout << "Network Name:" <<NT.load_network <<std::endl;
        system("sleep 3");
        std::cout << "Network Node:" <<NT.load_network_node <<std::endl;
        std::cout <<"************************************************"<<std::endl;
        std::cout <<"************************************************"<<std::endl;
        return 0;





        }
    }
    break;


    return 0;
    }

}


std::string moduleName = "Alchemy";

boot_upServices(moduleName);

std::cout << "Compiled at " << __TIME__ << std::endl;

return 0;
}
