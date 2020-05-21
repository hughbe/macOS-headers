//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@class NSFileHandle, NSLock;

@interface ISS_DMDataFromMappedFile : NSData
{
    NSFileHandle *_fileHandle;
    NSLock *_dataLock;
    void *_data;
    unsigned long long _len;
    BOOL _alreadyInitialized;
    BOOL _lenInitialized;
}

- (void)simulateAdditionalWrite;
- (void)finalize;
- (void)dealloc;
- (unsigned int)length;
- (const void *)bytes;
- (void)_initMapping;
- (void)_initLength;
- (id)initWithFileHandle:(id)arg1;

@end

