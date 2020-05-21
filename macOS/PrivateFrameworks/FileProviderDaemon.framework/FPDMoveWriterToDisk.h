//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProviderDaemon/FPDMoveWriterExecutor-Protocol.h>

@class FPDMoveWriter, NSFileManager;

__attribute__((visibility("hidden")))
@interface FPDMoveWriterToDisk : NSObject <FPDMoveWriterExecutor>
{
    FPDMoveWriter *_writer;
    NSFileManager *_fileManager;
    BOOL _stopAccessingDestination;
}

- (void).cxx_destruct;
- (void)performCreateFolder:(id)arg1 inside:(id)arg2 as:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)performMoveOfFolder:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 atomically:(BOOL)arg6 completion:(CDUnknownBlockType)arg7;
- (void)performMoveOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_performMoveOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 bounceNumber:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_resolveLocator:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performCopyOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_performCopyOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 bounceNumber:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_respectLastUsageDatePolicyForDestinationURL:(id)arg1;
- (void)dealloc;
- (id)initWithWriter:(id)arg1;

@end

