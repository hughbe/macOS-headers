//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKIDSDestination : NSObject
{
    NSString *_deviceIdentifier;
    NSString *_name;
}

+ (id)destinationWithDeviceIdentifier:(id)arg1 name:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (id)description;
- (id)initWithDeviceIdentifier:(id)arg1 name:(id)arg2;

@end

