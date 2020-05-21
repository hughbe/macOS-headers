//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMServicePlugInFileTransferSession, NSString;

@interface IMServicePlugInFileTransfer : NSObject
{
    struct _IMServicePlugInFileTransferInternal *_internal;
}

+ (id)fileTransferWithPath:(id)arg1 type:(id)arg2 totalBytes:(unsigned long long)arg3;
@property(readonly) unsigned long long totalBytes;
@property(readonly) unsigned long long transferredBytes;
@property(readonly) NSString *type;
@property(readonly) NSString *path;
@property(readonly) NSString *guid;
@property(readonly) IMServicePlugInFileTransferSession *session;
- (id)_url;
- (void)_setActualLastPathComponent:(id)arg1;
- (void)_setSession:(id)arg1;
- (void)_stream:(id)arg1 didReadOrWriteBytes:(long long)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1 type:(id)arg2 totalBytes:(unsigned long long)arg3;
- (id)_initWithGUID:(id)arg1 path:(id)arg2 type:(id)arg3 totalBytes:(unsigned long long)arg4;

@end

