//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface PPEventNameRecord : NSObject <NSSecureCoding>
{
    unsigned char _changeType;
    NSString *_identifier;
    double _score;
    NSString *_eventIdentifier;
    NSString *_title;
    NSString *_location;
    NSArray *_participantNames;
}

+ (BOOL)supportsSecureCoding;
+ (id)describeChangeType:(unsigned char)arg1;
+ (id)eventNameRecordWithScore:(double)arg1 eventIdentifier:(id)arg2 changeType:(unsigned char)arg3 title:(id)arg4 location:(id)arg5 participantNames:(id)arg6;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *participantNames; // @synthesize participantNames=_participantNames;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *eventIdentifier; // @synthesize eventIdentifier=_eventIdentifier;
@property(nonatomic) unsigned char changeType; // @synthesize changeType=_changeType;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (BOOL)isEqualToEventNameRecord:(id)arg1;
- (BOOL)hasScoreSimilarToRecord:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithIdentifier:(id)arg1 score:(double)arg2 eventIdentifier:(id)arg3 changeType:(unsigned char)arg4 title:(id)arg5 location:(id)arg6 participantNames:(id)arg7;

@end

