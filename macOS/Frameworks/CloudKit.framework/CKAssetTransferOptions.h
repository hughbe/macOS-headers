//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface CKAssetTransferOptions : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_sparseAware;
    NSNumber *_shouldFetchAssetContent;
    NSNumber *_shouldFetchAssetContentInMemory;
    NSNumber *_useMMCSEncryptionV2;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *useMMCSEncryptionV2; // @synthesize useMMCSEncryptionV2=_useMMCSEncryptionV2;
@property(copy, nonatomic) NSNumber *shouldFetchAssetContentInMemory; // @synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory;
@property(copy, nonatomic) NSNumber *shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(copy, nonatomic) NSNumber *sparseAware; // @synthesize sparseAware=_sparseAware;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

