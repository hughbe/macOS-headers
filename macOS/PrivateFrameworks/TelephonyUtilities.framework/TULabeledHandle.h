//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSString, TUHandle;

@interface TULabeledHandle : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isSuggested;
    TUHandle *_handle;
    NSString *_label;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isSuggested; // @synthesize isSuggested=_isSuggested;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) TUHandle *handle; // @synthesize handle=_handle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToLabeledHandle:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithHandle:(id)arg1 label:(id)arg2 isSuggested:(BOOL)arg3;

@end

