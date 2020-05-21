//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RKResponseFeatures : NSObject
{
    int _count;
    int _sameRecipientCount;
    NSString *_response;
    double _numOfElapsedDays;
    double _normalizedSourceAppCount;
    double _normalizedSourceNotificationCount;
    double _normalizedInputMethodCannedCount;
    double _normalizedInputMethodScribbleCount;
    double _normalizedInputMethodDictationCount;
    unsigned long long _responseLength;
}

- (void).cxx_destruct;
@property(readonly) int sameRecipientCount; // @synthesize sameRecipientCount=_sameRecipientCount;
@property(readonly) unsigned long long responseLength; // @synthesize responseLength=_responseLength;
@property(readonly) double normalizedInputMethodDictationCount; // @synthesize normalizedInputMethodDictationCount=_normalizedInputMethodDictationCount;
@property(readonly) double normalizedInputMethodScribbleCount; // @synthesize normalizedInputMethodScribbleCount=_normalizedInputMethodScribbleCount;
@property(readonly) double normalizedInputMethodCannedCount; // @synthesize normalizedInputMethodCannedCount=_normalizedInputMethodCannedCount;
@property(readonly) double normalizedSourceNotificationCount; // @synthesize normalizedSourceNotificationCount=_normalizedSourceNotificationCount;
@property(readonly) double normalizedSourceAppCount; // @synthesize normalizedSourceAppCount=_normalizedSourceAppCount;
@property(readonly) double numOfElapsedDays; // @synthesize numOfElapsedDays=_numOfElapsedDays;
@property(readonly) int count; // @synthesize count=_count;
@property(readonly) NSString *response; // @synthesize response=_response;
- (id)initWithFeatures:(id)arg1 count:(int)arg2 numOfElapsedDays:(double)arg3 sourceAppCount:(double)arg4 sourceNotificationCount:(double)arg5 inputSourceCannedCount:(double)arg6 inputSourceScribbleCount:(double)arg7 inputSourceDictationCount:(double)arg8 responseLength:(unsigned long long)arg9 sameRecipientCount:(int)arg10;

@end

