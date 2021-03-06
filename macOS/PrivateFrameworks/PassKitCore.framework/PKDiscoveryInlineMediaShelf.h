//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKDiscoveryShelf.h>

@class NSString, PKDiscoveryMedia;

@interface PKDiscoveryInlineMediaShelf : PKDiscoveryShelf
{
    PKDiscoveryMedia *_media;
    NSString *_captionKey;
    long long _displayType;
    NSString *_localizedCaption;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *localizedCaption; // @synthesize localizedCaption=_localizedCaption;
@property(readonly, nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property(readonly, nonatomic) NSString *captionKey; // @synthesize captionKey=_captionKey;
@property(readonly, nonatomic) PKDiscoveryMedia *media; // @synthesize media=_media;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;
- (void)localizeWithBundle:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

