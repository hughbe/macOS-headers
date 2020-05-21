//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPSubscriptionNotificationAlert : PBCodable <NSCopying>
{
    NSString *_actionLocKey;
    NSString *_category;
    NSString *_launchImage;
    NSMutableArray *_localizedArguments;
    NSString *_localizedKey;
    NSString *_soundName;
    NSString *_subtitle;
    NSMutableArray *_subtitleLocalizedArguments;
    NSString *_subtitleLocalizedKey;
    NSString *_text;
    NSString *_title;
    NSMutableArray *_titleLocalizedArguments;
    NSString *_titleLocalizedKey;
}

+ (Class)subtitleLocalizedArgumentsType;
+ (Class)titleLocalizedArgumentsType;
+ (Class)localizedArgumentsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *subtitleLocalizedArguments; // @synthesize subtitleLocalizedArguments=_subtitleLocalizedArguments;
@property(retain, nonatomic) NSString *subtitleLocalizedKey; // @synthesize subtitleLocalizedKey=_subtitleLocalizedKey;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSMutableArray *titleLocalizedArguments; // @synthesize titleLocalizedArguments=_titleLocalizedArguments;
@property(retain, nonatomic) NSString *titleLocalizedKey; // @synthesize titleLocalizedKey=_titleLocalizedKey;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *soundName; // @synthesize soundName=_soundName;
@property(retain, nonatomic) NSString *launchImage; // @synthesize launchImage=_launchImage;
@property(retain, nonatomic) NSString *actionLocKey; // @synthesize actionLocKey=_actionLocKey;
@property(retain, nonatomic) NSMutableArray *localizedArguments; // @synthesize localizedArguments=_localizedArguments;
@property(retain, nonatomic) NSString *localizedKey; // @synthesize localizedKey=_localizedKey;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)subtitleLocalizedArgumentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subtitleLocalizedArgumentsCount;
- (void)addSubtitleLocalizedArguments:(id)arg1;
- (void)clearSubtitleLocalizedArguments;
@property(readonly, nonatomic) BOOL hasSubtitleLocalizedKey;
@property(readonly, nonatomic) BOOL hasSubtitle;
- (id)titleLocalizedArgumentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)titleLocalizedArgumentsCount;
- (void)addTitleLocalizedArguments:(id)arg1;
- (void)clearTitleLocalizedArguments;
@property(readonly, nonatomic) BOOL hasTitleLocalizedKey;
@property(readonly, nonatomic) BOOL hasTitle;
@property(readonly, nonatomic) BOOL hasCategory;
@property(readonly, nonatomic) BOOL hasSoundName;
@property(readonly, nonatomic) BOOL hasLaunchImage;
@property(readonly, nonatomic) BOOL hasActionLocKey;
- (id)localizedArgumentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedArgumentsCount;
- (void)addLocalizedArguments:(id)arg1;
- (void)clearLocalizedArguments;
@property(readonly, nonatomic) BOOL hasLocalizedKey;
@property(readonly, nonatomic) BOOL hasText;

@end

