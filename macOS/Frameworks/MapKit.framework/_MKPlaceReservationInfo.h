//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSImage, NSString;
@protocol _MKPlaceReservationDelegate;

@interface _MKPlaceReservationInfo : NSObject
{
    NSString *_attributionProviderDisplayName;
    NSImage *_attributionProviderLogoImage;
    NSArray *_openTimes;
    id <_MKPlaceReservationDelegate> _reservationDelegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <_MKPlaceReservationDelegate> reservationDelegate; // @synthesize reservationDelegate=_reservationDelegate;
@property(readonly, copy, nonatomic) NSArray *openTimes; // @synthesize openTimes=_openTimes;
@property(readonly, nonatomic) NSImage *attributionProviderLogoImage; // @synthesize attributionProviderLogoImage=_attributionProviderLogoImage;
@property(readonly, copy, nonatomic) NSString *attributionProviderDisplayName; // @synthesize attributionProviderDisplayName=_attributionProviderDisplayName;
- (id)initWithOpenTimes:(id)arg1 attributionProviderName:(id)arg2 providerLogoImage:(id)arg3 delegate:(id)arg4;

@end

