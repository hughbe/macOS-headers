//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group, TSUReadChannel;

__attribute__((visibility("hidden")))
@interface TSUZipFileDescriptorWrapper : NSObject
{
    NSObject<OS_dispatch_group> *_accessGroup;
    int _fileDescriptor;
    id <TSUReadChannel> _readChannel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <TSUReadChannel> readChannel; // @synthesize readChannel=_readChannel;
@property(readonly, nonatomic) int fileDescriptor; // @synthesize fileDescriptor=_fileDescriptor;
- (void)waitForAccessToEnd;
- (void)endAccess;
- (void)beginAccess;
- (void)dealloc;
- (id)initWithFileDescriptor:(int)arg1 queue:(id)arg2;
- (id)init;

@end

