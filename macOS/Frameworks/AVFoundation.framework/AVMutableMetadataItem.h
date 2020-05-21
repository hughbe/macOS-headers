//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVMetadataItem.h>

@class AVMutableMetadataItemInternal, NSDictionary, NSLocale, NSString;
@protocol NSObject><NSCopying;

@interface AVMutableMetadataItem : AVMetadataItem
{
    AVMutableMetadataItemInternal *_mutablePriv;
}

+ (id)keyPathsForValuesAffectingIdentifier;
+ (id)metadataItem;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSDictionary *extraAttributes;
@property(copy, nonatomic) NSString *dataType;
@property(copy, nonatomic) id <NSObject><NSCopying> value;
- (void)setStartDate:(id)arg1;
@property(nonatomic) CDStruct_1b6d18a9 duration;
@property(nonatomic) CDStruct_1b6d18a9 time;
@property(copy, nonatomic) NSString *extendedLanguageTag;
@property(copy, nonatomic) NSLocale *locale;
@property(copy, nonatomic) NSString *identifier;
- (void)setKeySpace:(id)arg1;
- (void)setKey:(id)arg1;
- (id)startDate;
- (id)languageCode;
- (id)keySpace;
- (id)key;

@end

