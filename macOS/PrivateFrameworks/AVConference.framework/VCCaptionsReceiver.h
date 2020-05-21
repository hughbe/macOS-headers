//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VCCaptionsTranscription;
@protocol VCCaptionsReceiverDelegate;

__attribute__((visibility("hidden")))
@interface VCCaptionsReceiver : NSObject
{
    unsigned int _captionsLastUtteranceNumber;
    unsigned int _captionsLastUpdateNumber;
    id _delegate;
    VCCaptionsTranscription *_currentTranscription;
}

@property(retain, nonatomic) VCCaptionsTranscription *currentTranscription; // @synthesize currentTranscription=_currentTranscription;
- (void)processCaptionsData:(id)arg1;
@property(readonly) id <VCCaptionsReceiverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

