//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IASUtilities/IASOutputStream.h>

@interface IASLZMAOutputStream : IASOutputStream
{
    BOOL _endOfFile;
    BOOL _closed;
    int _compressionLevel;
    unsigned int _writeBufferCapacity;
    long long _integrityCheck;
    CDStruct_d4262b82 *_stream;
    char *_writeBuffer;
    CDStruct_7a75b897 *_filters;
    CDStruct_43893798 _options;
}

@property(nonatomic) CDStruct_43893798 options; // @synthesize options=_options;
@property(nonatomic) CDStruct_7a75b897 *filters; // @synthesize filters=_filters;
@property(nonatomic) unsigned int writeBufferCapacity; // @synthesize writeBufferCapacity=_writeBufferCapacity;
@property(nonatomic) char *writeBuffer; // @synthesize writeBuffer=_writeBuffer;
@property(nonatomic) BOOL closed; // @synthesize closed=_closed;
@property(nonatomic) BOOL endOfFile; // @synthesize endOfFile=_endOfFile;
@property(nonatomic) CDStruct_d4262b82 *stream; // @synthesize stream=_stream;
@property(nonatomic) long long integrityCheck; // @synthesize integrityCheck=_integrityCheck;
@property(nonatomic) int compressionLevel; // @synthesize compressionLevel=_compressionLevel;
- (unsigned long long)streamStatus;
- (BOOL)hasSpaceAvailable;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (void)close;
- (void)open;
- (id)init;
- (id)currentLZMAErrorWithReturnValue:(int)arg1;

@end

