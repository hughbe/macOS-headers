//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailCore/ECMessageFlagChangeBuilder-Protocol.h>
#import <EmailCore/EFPubliclyDescribable-Protocol.h>
#import <EmailCore/NSCopying-Protocol.h>
#import <EmailCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface ECMessageFlagChange : NSObject <ECMessageFlagChangeBuilder, EFPubliclyDescribable, NSCopying, NSSecureCoding>
{
    BOOL _read;
    BOOL _deleted;
    BOOL _replied;
    BOOL _flagged;
    BOOL _draft;
    BOOL _forwarded;
    BOOL _redirected;
    BOOL _junkLevelSetByUser;
    BOOL _readChanged;
    BOOL _deletedChanged;
    BOOL _repliedChanged;
    BOOL _flaggedChanged;
    BOOL _draftChanged;
    BOOL _forwardedChanged;
    BOOL _redirectedChanged;
    BOOL _junkLevelSetByUserChanged;
    BOOL _junkLevelChanged;
    BOOL _flagColorChanged;
    unsigned long long _junkLevel;
    unsigned long long _flagColor;
    long long _reason;
}

+ (BOOL)supportsSecureCoding;
+ (id)setForwarded;
+ (id)setReplied;
+ (id)clearFlagged;
+ (id)setFlagged;
+ (id)clearRead;
+ (id)setDeleted;
+ (id)setRead;
+ (id)changeFrom:(id)arg1 to:(id)arg2;
@property(nonatomic) long long reason; // @synthesize reason=_reason;
@property(nonatomic) BOOL flagColorChanged; // @synthesize flagColorChanged=_flagColorChanged;
@property(nonatomic) BOOL junkLevelChanged; // @synthesize junkLevelChanged=_junkLevelChanged;
@property(nonatomic) BOOL junkLevelSetByUserChanged; // @synthesize junkLevelSetByUserChanged=_junkLevelSetByUserChanged;
@property(nonatomic) BOOL redirectedChanged; // @synthesize redirectedChanged=_redirectedChanged;
@property(nonatomic) BOOL forwardedChanged; // @synthesize forwardedChanged=_forwardedChanged;
@property(nonatomic) BOOL draftChanged; // @synthesize draftChanged=_draftChanged;
@property(nonatomic) BOOL flaggedChanged; // @synthesize flaggedChanged=_flaggedChanged;
@property(nonatomic) BOOL repliedChanged; // @synthesize repliedChanged=_repliedChanged;
@property(nonatomic) BOOL deletedChanged; // @synthesize deletedChanged=_deletedChanged;
@property(nonatomic) BOOL readChanged; // @synthesize readChanged=_readChanged;
@property(nonatomic) unsigned long long flagColor; // @synthesize flagColor=_flagColor;
@property(nonatomic) unsigned long long junkLevel; // @synthesize junkLevel=_junkLevel;
@property(nonatomic) BOOL junkLevelSetByUser; // @synthesize junkLevelSetByUser=_junkLevelSetByUser;
@property(nonatomic) BOOL redirected; // @synthesize redirected=_redirected;
@property(nonatomic) BOOL forwarded; // @synthesize forwarded=_forwarded;
@property(nonatomic) BOOL draft; // @synthesize draft=_draft;
@property(nonatomic) BOOL flagged; // @synthesize flagged=_flagged;
@property(nonatomic) BOOL replied; // @synthesize replied=_replied;
@property(nonatomic) BOOL deleted; // @synthesize deleted=_deleted;
@property(nonatomic) BOOL read; // @synthesize read=_read;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)changesFlagColorTo:(unsigned long long)arg1;
- (void)changesJunkLevelTo:(unsigned long long)arg1;
- (void)changesJunkLevelSetByUserTo:(BOOL)arg1;
- (void)changesRedirectedTo:(BOOL)arg1;
- (void)changesForwardedTo:(BOOL)arg1;
- (void)changesDraftTo:(BOOL)arg1;
- (void)changesFlaggedTo:(BOOL)arg1;
- (void)changesRepliedTo:(BOOL)arg1;
- (void)changesDeletedTo:(BOOL)arg1;
- (void)changesReadTo:(BOOL)arg1;
- (id)flagsAfterChangingFlags:(id)arg1 flagsWereChanged:(char *)arg2;
@property(readonly, nonatomic) BOOL hasChanges;
- (id)initWithBuilder:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

