//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosImagingFoundation/IPAAdjustment.h>

@class NSDictionary, NSString;

@interface IPAPhotoAdjustment : IPAAdjustment
{
    BOOL _enabled;
    NSString *_maskUUID;
    NSDictionary *_autoSettings;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *autoSettings; // @synthesize autoSettings=_autoSettings;
@property(retain, nonatomic) NSString *maskUUID; // @synthesize maskUUID=_maskUUID;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (id)_debugDescriptionSuffix;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

