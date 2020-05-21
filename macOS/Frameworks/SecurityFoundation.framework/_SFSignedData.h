//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class NSData;

@interface _SFSignedData : NSObject <NSCopying, NSSecureCoding>
{
    id _signedDataInternal;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSData *signature;
@property(readonly) NSData *data;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 signature:(id)arg2;

@end

