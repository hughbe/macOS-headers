//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSProgress;

__attribute__((visibility("hidden")))
@interface _FPCopyFileStatus : NSObject
{
    NSProgress *_progress;
    NSMutableDictionary *_lastBytesCopiedByFile;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *lastBytesCopiedByFile; // @synthesize lastBytesCopiedByFile=_lastBytesCopiedByFile;
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
- (void)finishCopyingFile:(id)arg1 state:(struct _copyfile_state *)arg2;
- (void)updateCopyingFile:(id)arg1 state:(struct _copyfile_state *)arg2;
- (void)beginCopyingFile:(id)arg1 state:(struct _copyfile_state *)arg2;
- (id)init;

@end

