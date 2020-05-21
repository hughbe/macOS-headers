//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ISVitalitySettings;

__attribute__((visibility("hidden")))
@interface ISLivePhotoVitalityFilter : NSObject
{
    BOOL _isPerformingInputChanges;
    BOOL __shouldUpdateOutput;
    id <ISVitalitySettings> _settings;
    long long _state;
    CDUnknownBlockType _outputChangeHandler;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setShouldUpdateOutput:) BOOL _shouldUpdateOutput; // @synthesize _shouldUpdateOutput=__shouldUpdateOutput;
@property(nonatomic, setter=_setPerformingInputChanges:) BOOL isPerformingInputChanges; // @synthesize isPerformingInputChanges=_isPerformingInputChanges;
@property(copy, nonatomic) CDUnknownBlockType outputChangeHandler; // @synthesize outputChangeHandler=_outputChangeHandler;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) id <ISVitalitySettings> settings; // @synthesize settings=_settings;
- (void)updateOutput;
- (void)invalidateOutput;
- (void)performInputChanges:(CDUnknownBlockType)arg1;
- (void)setState:(long long)arg1;
- (id)initWithSettings:(id)arg1;
- (id)init;

@end

