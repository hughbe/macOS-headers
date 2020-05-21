//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVVideoCompositionRenderContext, AVWeakReference, NSArray, NSDictionary;
@protocol AVVideoCompositionInstruction;

__attribute__((visibility("hidden")))
@interface AVAsynchronousVideoCompositionRequestInternal : NSObject
{
    AVWeakReference *_session;
    AVVideoCompositionRenderContext *_renderContext;
    struct OpaqueFigVideoCompositorFrame *_compositionFrame;
    CDStruct_1b6d18a9 _compositionTime;
    NSDictionary *_sourcesByTrackID;
    NSArray *_sourceTrackIDsInClientOrder;
    id <AVVideoCompositionInstruction> _instruction;
    BOOL _isFinished;
}

@property(nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
@property(retain, nonatomic) id <AVVideoCompositionInstruction> instruction; // @synthesize instruction=_instruction;
@property(retain, nonatomic) NSArray *sourceTrackIDsInClientOrder; // @synthesize sourceTrackIDsInClientOrder=_sourceTrackIDsInClientOrder;
@property(retain, nonatomic) NSDictionary *sourcesByTrackID; // @synthesize sourcesByTrackID=_sourcesByTrackID;
@property(nonatomic) CDStruct_1b6d18a9 compositionTime; // @synthesize compositionTime=_compositionTime;
@property(nonatomic) struct OpaqueFigVideoCompositorFrame *compositionFrame; // @synthesize compositionFrame=_compositionFrame;
@property(retain, nonatomic) AVVideoCompositionRenderContext *renderContext; // @synthesize renderContext=_renderContext;
@property(retain, nonatomic) AVWeakReference *session; // @synthesize session=_session;
- (void)dealloc;

@end

