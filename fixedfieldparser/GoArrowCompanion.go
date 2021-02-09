package fixedfieldparser

/*
#cgo LDFLAGS: -L./ -lArrowToolsStaticLib -lglue
#include "glue.h"
*/

import "C"

func init(jsonfilename string) {
	C.init(C.CString(jsonfilename))
}
func parseFixedFieldToOrc(localFileName string, parsedLocalFileName string) {
	C.parseFixedFileToParquet(C.CString(localFileName), C.CString(parsedLocalFileName))
}
