//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNPostalAddress, NSURL;

@interface ABMapsLaunchRequest : NSObject
{
    BOOL _presentDirections;
    CNPostalAddress *_postalAddress;
    NSURL *_fallbackURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *fallbackURL; // @synthesize fallbackURL=_fallbackURL;
@property(readonly, nonatomic) BOOL presentDirections; // @synthesize presentDirections=_presentDirections;
@property(readonly, nonatomic) CNPostalAddress *postalAddress; // @synthesize postalAddress=_postalAddress;
- (id)initWithPostalAddress:(id)arg1 presentDirections:(BOOL)arg2 fallbackURL:(id)arg3;

@end

