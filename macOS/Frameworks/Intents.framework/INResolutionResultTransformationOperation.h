//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class INIntent, INIntentSlotDescription;
@protocol INIntentParameterOptionsProviding, INIntentResolutionResultDataProviding;

__attribute__((visibility("hidden")))
@interface INResolutionResultTransformationOperation : NSOperation
{
    BOOL _finished;
    BOOL _executing;
    id <INIntentResolutionResultDataProviding> _result;
    INIntent *_intent;
    INIntentSlotDescription *_intentSlotDescription;
    id <INIntentParameterOptionsProviding> _optionsProvider;
    CDUnknownBlockType _returnBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType returnBlock; // @synthesize returnBlock=_returnBlock;
@property(readonly, nonatomic) id <INIntentParameterOptionsProviding> optionsProvider; // @synthesize optionsProvider=_optionsProvider;
@property(readonly, nonatomic) INIntentSlotDescription *intentSlotDescription; // @synthesize intentSlotDescription=_intentSlotDescription;
@property(readonly, nonatomic) INIntent *intent; // @synthesize intent=_intent;
@property(readonly, nonatomic) id <INIntentResolutionResultDataProviding> result; // @synthesize result=_result;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)start;
- (id)initWithResult:(id)arg1 intent:(id)arg2 intentSlotDescription:(id)arg3 optionsProvider:(id)arg4;

@end

