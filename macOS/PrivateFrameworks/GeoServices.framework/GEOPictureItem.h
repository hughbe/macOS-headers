//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOPictureItem-Protocol.h>

@class NSString;
@protocol GEOMapItemPhoto;

@interface GEOPictureItem : NSObject <GEOPictureItem>
{
    id <GEOMapItemPhoto> _photo;
    int _pictureItemPhotoType;
    NSString *_primaryText;
    NSString *_secondaryText;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(readonly, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
@property(readonly, nonatomic) int pictureItemPhotoType; // @synthesize pictureItemPhotoType=_pictureItemPhotoType;
@property(readonly, nonatomic) id <GEOMapItemPhoto> photo; // @synthesize photo=_photo;
- (id)initWithPictureItem:(id)arg1;
- (id)initWithPhoto:(id)arg1 pictureItemPhotoType:(int)arg2 primaryText:(id)arg3 secondaryText:(id)arg4;
- (id)init;

@end

