//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AceObject;
@protocol SAAceCommand;

@interface AFInterstitialCommandWrapper : NSObject
{
    CDUnknownBlockType _completion;
    AceObject<SAAceCommand> *_command;
    AceObject<SAAceCommand> *_defaultReply;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) AceObject<SAAceCommand> *defaultReply; // @synthesize defaultReply=_defaultReply;
@property(readonly, nonatomic) AceObject<SAAceCommand> *command; // @synthesize command=_command;
- (void)dispatchCompletionWithReply:(id)arg1 error:(id)arg2;
- (id)initWithCommand:(id)arg1 defaultReply:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

