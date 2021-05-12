#ifndef GTF2CSVPLUGIN_H
#define GTF2CSVPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class GTF2CSVPlugin : public Plugin
{
public: 
 std::string toString() {return "GTF2CSV";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
 std::map<std::string, std::string> parameters;
};

#endif
