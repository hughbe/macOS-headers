//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/NSSecureCoding-Protocol.h>

@class INSpeakableString, NSString, WFDataInfo;

@interface WFNoteGroupDescriptor : NSObject <NSSecureCoding>
{
    INSpeakableString *_speakableString;
    NSString *_accountIdentifier;
    unsigned long long _managedLevel;
}

+ (unsigned long long)managedLevelForNotesAccounts;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long managedLevel; // @synthesize managedLevel=_managedLevel;
@property(readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, nonatomic) INSpeakableString *speakableString; // @synthesize speakableString=_speakableString;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) WFDataInfo *targetDataInfo;
- (id)descriptorWithTargetAccountIdentifier:(id)arg1 targetManagedLevel:(unsigned long long)arg2;
- (id)initWithNoteGroupSpeakableString:(id)arg1;
- (id)initWithNoteGroupSpeakableString:(id)arg1 accountIdentifier:(id)arg2 managedLavel:(unsigned long long)arg3;

@end

