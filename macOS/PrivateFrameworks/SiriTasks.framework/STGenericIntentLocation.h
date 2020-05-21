//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriTasks/NSSecureCoding-Protocol.h>

@class NSString;

@interface STGenericIntentLocation : NSObject <NSSecureCoding>
{
    BOOL _isLatLong;
    NSString *_name;
    double _latitude;
    double _longitude;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL isLatLong; // @synthesize isLatLong=_isLatLong;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 latitude:(double)arg2 longitude:(double)arg3;

@end

