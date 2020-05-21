//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReader/SCRTextAreaChange.h>

@class NSString, SCRTextMarker;

__attribute__((visibility("hidden")))
@interface _SCRTextAreaChangeSimple : SCRTextAreaChange
{
    BOOL _truncated;
    long long _editType;
    NSString *_value;
    SCRTextMarker *_marker;
    unsigned long long _length;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(retain, nonatomic) SCRTextMarker *marker; // @synthesize marker=_marker;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) long long editType; // @synthesize editType=_editType;
- (BOOL)isEqual:(id)arg1;
- (BOOL)containedByRange:(id)arg1 forUIElement:(id)arg2;
- (void)addValueToOutputRequest:(id)arg1 typingEchoPreference:(long long)arg2;
- (BOOL)isCandidateForWordEchoWithTypingEchoPreference:(long long)arg1;
- (BOOL)isCandidateForCharacterEchoWithTypingEchoPreference:(long long)arg1;
- (id)description;
- (BOOL)isTruncated;

@end

