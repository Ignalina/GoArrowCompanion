#ifndef GLUE_GO_H
#define GLUE_GO_H

#ifdef __cplusplus
extern "C" {
#endif

void init(char *jsonfilename);
void parseFixedFieldToParquet(char *localFileName,char *parsedLocalFileName);
void parseFixedFieldToOrc(char *localFileName,char *parsedLocalFileName);
void parseFixedFieldToFeather(char *localFileName,char *parsedLocalFileName);


#endif // GLUE_GO_H

#ifdef __cplusplus
}
#endif
