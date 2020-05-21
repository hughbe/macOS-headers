//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface CTCellIdInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_cellId;
    NSNumber *_baseId;
}

+ (BOOL)supportsSecureCoding;
+ (id)cellIdInfoFromCellId:(int)arg1 baseId:(int)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *baseId; // @synthesize baseId=_baseId;
@property(readonly, nonatomic) NSNumber *cellId; // @synthesize cellId=_cellId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

