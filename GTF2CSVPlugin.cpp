#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "GTF2CSVPlugin.h"

void GTF2CSVPlugin::input(std::string file) {
 inputfile = file;
 /*std::ifstream ifile(inputfile, std::ios::in);
 while (!ifile.eof()) {
   std::string key, value;
   ifile >> key;
   ifile >> value;
   parameters[key] = value;
 }*/
}

void GTF2CSVPlugin::run() {}

void GTF2CSVPlugin::output(std::string file) {
//-cluster_fast HMP_MOCK.v35.fasta -id 0.9 -centroids nr.fasta
 std::string outputfile = file;
 std::string myCommand = "";
myCommand += "gtf2csv";
myCommand += " -f ";
myCommand += inputfile;
myCommand += " -o ";
myCommand += outputfile;
std::cout<<myCommand<<std::endl;
 system(myCommand.c_str());
}

PluginProxy<GTF2CSVPlugin> GTF2CSVPluginProxy = PluginProxy<GTF2CSVPlugin>("GTF2CSV", PluginManager::getInstance());
