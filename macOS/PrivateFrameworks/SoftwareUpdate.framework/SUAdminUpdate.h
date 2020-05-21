//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdate/NSSecureCoding-Protocol.h>

@class NSString;

@interface SUAdminUpdate : NSObject <NSSecureCoding>
{
    BOOL _useDoItLaterWhenAppropriate;
    NSString *_productKey;
    long long _adminAction;
    long long _restartTimeInterval;
}

+ (BOOL)supportsSecureCoding;
@property BOOL useDoItLaterWhenAppropriate; // @synthesize useDoItLaterWhenAppropriate=_useDoItLaterWhenAppropriate;
@property long long restartTimeInterval; // @synthesize restartTimeInterval=_restartTimeInterval;
@property(readonly) long long adminAction; // @synthesize adminAction=_adminAction;
@property(readonly, retain) NSString *productKey; // @synthesize productKey=_productKey;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithProductKey:(id)arg1 adminAction:(long long)arg2;

@end

