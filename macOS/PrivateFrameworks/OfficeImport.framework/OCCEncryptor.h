//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OCCEncryptor : NSObject
{
    NSString *mOutputFilename;
    struct OCCStreamer *mStreamer;
}

+ (id)allocTempFileWithBase:(id)arg1 filename:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *outputFilename; // @synthesize outputFilename=mOutputFilename;
- (BOOL)encryptIntoOutputFile;
- (BOOL)encrypt;
- (id)initWithStreamer:(struct OCCStreamer *)arg1;
- (void)dealloc;

@end

