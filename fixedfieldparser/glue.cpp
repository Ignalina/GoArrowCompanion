#include "ArrowCompanion.h"


ArrowCompanion *ac;


extern "C" void init(char *jsonfilename) {
	ac=new ArrowCompanion(jsonefilename);
	return;
}



extern "C" void parseFixedFieldToParquet(char *localFileName,char *parsedLocalFileName) {
	ac->createParquet(localFileName,parsedLocalFileName);
	return;
}

extern "C" void parseFixedFieldToOrc(char *localFileName,char *parsedLocalFileName) {
	ac->createOrc(localFileName,parsedLocalFileName);
	return;
}


extern "C" void parseFixedFieldToFeather(char *localFileName,char *parsedLocalFileName) {
	ac->createFeather(localFileName,parsedLocalFileName);
	return;
}
