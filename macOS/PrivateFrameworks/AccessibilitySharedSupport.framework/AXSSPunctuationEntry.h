//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilitySharedSupport/NSCopying-Protocol.h>

@class NSData, NSDate, NSDictionary, NSString, NSUUID;

@interface AXSSPunctuationEntry : NSObject <NSCopying>
{
    NSUUID *_uuid;
    NSUUID *_groupUUID;
    BOOL _inCloud;
    unsigned short _version;
    NSString *_punctuation;
    NSString *_replacement;
    long long _rule;
    NSString *_ckChangeTag;
    NSDate *_lastModifiedDate;
    NSDate *_ckRecordProcessDate;
}

+ (id)punctuationEntryFromJSONRepresentation:(id)arg1;
+ (id)punctuationEntryFromJSONDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *ckRecordProcessDate; // @synthesize ckRecordProcessDate=_ckRecordProcessDate;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(retain, nonatomic) NSString *ckChangeTag; // @synthesize ckChangeTag=_ckChangeTag;
@property(nonatomic) BOOL inCloud; // @synthesize inCloud=_inCloud;
@property(nonatomic) unsigned short version; // @synthesize version=_version;
@property(nonatomic) long long rule; // @synthesize rule=_rule;
@property(retain, nonatomic) NSString *replacement; // @synthesize replacement=_replacement;
@property(retain, nonatomic) NSString *punctuation; // @synthesize punctuation=_punctuation;
@property(retain, nonatomic) NSUUID *groupUUID; // @synthesize groupUUID=_groupUUID;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (BOOL)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSData *jsonRepresentation;
@property(readonly, nonatomic) NSDictionary *jsonDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

