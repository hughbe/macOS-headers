//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSError;

@interface ASDRequestResponse : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _success;
    NSError *_error;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSError *error; // @synthesize error=_error;
@property BOOL success; // @synthesize success=_success;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

