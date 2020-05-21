//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SignpostSupport/SignpostEvent.h>

@class NSObject;
@protocol OS_dispatch_source;

@interface SignpostStreamEvent : SignpostEvent
{
    unsigned long long _totalFrameCount;
    NSObject<OS_dispatch_source> *_timeoutSource;
    unsigned long long _serialNumber;
}

+ (id)serializationTypeNumber;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutSource; // @synthesize timeoutSource=_timeoutSource;
@property(nonatomic) unsigned long long _totalFrameCount; // @synthesize _totalFrameCount;
- (BOOL)_hasTotalFrames;
- (id)initWithDictionary:(id)arg1;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg1 shouldRedact:(BOOL)arg2;

@end

