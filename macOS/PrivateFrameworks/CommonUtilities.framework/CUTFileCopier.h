//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol CUTFileCopierDelegate;

@interface CUTFileCopier : NSObject
{
    BOOL _shouldCancel;
    BOOL _didErrorOccur;
    BOOL _inProgress;
    unsigned int _operation;
    id <CUTFileCopierDelegate> _delegate;
    NSURL *_inputURL;
    NSURL *_outputURL;
    id _identifier;
    void *_BOMCopier;
}

- (void).cxx_destruct;
@property void *_BOMCopier; // @synthesize _BOMCopier;
@property unsigned int operation; // @synthesize operation=_operation;
@property BOOL inProgress; // @synthesize inProgress=_inProgress;
@property(readonly, nonatomic) BOOL didErrorOccur; // @synthesize didErrorOccur=_didErrorOccur;
@property(readonly, nonatomic) BOOL wasCancelled; // @synthesize wasCancelled=_shouldCancel;
@property(readonly) id identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(readonly, copy) NSURL *inputURL; // @synthesize inputURL=_inputURL;
@property __weak id <CUTFileCopierDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_worker_doCopy;
- (void)_main_copierFinishedWithResult:(id)arg1;
- (void)cleanup;
- (void)cancel;
- (void)start;
- (void)_fillOutputURLFromInputURL;
- (id)_temporaryCopierPath;
- (void)dealloc;
- (id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned int)arg4 delegate:(id)arg5;

@end

