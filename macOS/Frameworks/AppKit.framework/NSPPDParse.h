//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSPPDParse : NSObject
{
    CDStruct_d87b8232 inputStreamStack[17];
    CDStruct_d87b8232 *input;
    id delegate;
    CDStruct_815caf98 argBuf;
    CDStruct_815caf98 keyTran;
    CDStruct_815caf98 argTran;
}

+ (id)findPPDFileName:(id)arg1;
+ (id)availablePPDTypeFiles;
+ (id)unixToTypeName:(id)arg1;
+ (id)typeToUnixName:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)readFromFile:(id)arg1;
- (id)endInputStream;
- (id)startInputStream:(id)arg1;
- (id)openInclude:(id)arg1;
- (id)run;
- (id)parseStream;
- (BOOL)parseKey:(BOOL)arg1;
- (BOOL)getMoreInput;
- (id)growBuffer:(CDStruct_815caf98 *)arg1 current:(char **)arg2 end:(char **)arg3 factor:(float)arg4;
- (id)processKeyword:(char *)arg1 option:(char *)arg2 keyTran:(char *)arg3 arg:(char *)arg4 argTran:(char *)arg5 quotedArg:(BOOL)arg6;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end

