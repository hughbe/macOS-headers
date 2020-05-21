//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface CalDAVCalendarUserAddress : NSObject
{
    NSURL *_address;
    long long _preferred;
}

+ (id)_preferredAddressNoPreferred:(id)arg1;
+ (id)_minPreferredAddress:(id)arg1;
+ (id)preferredAddress:(id)arg1;
+ (id)unpackCalDAVUserAdress:(id)arg1;
+ (id)packCalDAVUserAdress:(id)arg1;
+ (long long)defaultPreferredAttribute;
- (void).cxx_destruct;
@property long long preferred; // @synthesize preferred=_preferred;
@property(retain, nonatomic) NSURL *address; // @synthesize address=_address;
- (long long)compare:(id)arg1;
- (id)initWithAddress:(id)arg1 preferred:(long long)arg2;

@end

