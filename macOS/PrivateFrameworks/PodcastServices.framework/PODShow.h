//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PodcastServices/PODContentEntity.h>

#import <PodcastServices/PODSecureCoding-Protocol.h>
#import <PodcastServices/PODShowProtocol-Protocol.h>

@class NSDate, NSString, NSURL;
@protocol PODShowSettingsProtocol;

@interface PODShow : PODContentEntity <PODShowProtocol, PODSecureCoding>
{
    BOOL _isExplicit;
    BOOL _isSubscribed;
    NSString *_title;
    NSString *_author;
    NSString *_provider;
    NSString *_category;
    NSString *_descriptionOfShow;
    unsigned long long _storeCollectionId;
    NSDate *_addedDate;
    NSURL *_feedUrl;
    NSURL *_showPageUrl;
    id <PODShowSettingsProtocol> _settings;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <PODShowSettingsProtocol> settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) NSURL *showPageUrl; // @synthesize showPageUrl=_showPageUrl;
@property(readonly, nonatomic) NSURL *feedUrl; // @synthesize feedUrl=_feedUrl;
@property(readonly, nonatomic) NSDate *addedDate; // @synthesize addedDate=_addedDate;
@property(readonly, nonatomic) BOOL isSubscribed; // @synthesize isSubscribed=_isSubscribed;
@property(readonly, nonatomic) BOOL isExplicit; // @synthesize isExplicit=_isExplicit;
@property(readonly, nonatomic) unsigned long long storeCollectionId; // @synthesize storeCollectionId=_storeCollectionId;
@property(readonly, nonatomic) NSString *descriptionOfShow; // @synthesize descriptionOfShow=_descriptionOfShow;
@property(readonly, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) NSString *author; // @synthesize author=_author;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initUsingPropertiesFrom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long syncID;

@end

