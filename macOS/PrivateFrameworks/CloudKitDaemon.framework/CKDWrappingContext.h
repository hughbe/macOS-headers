//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecordID, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDWrappingContext : NSObject
{
    CKRecordID *_recordID;
    NSString *_fieldName;
    NSData *_fileSignature;
    NSData *_referenceSignature;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *referenceSignature; // @synthesize referenceSignature=_referenceSignature;
@property(retain, nonatomic) NSData *fileSignature; // @synthesize fileSignature=_fileSignature;
@property(retain, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
- (id)encryptedDataContextString;
- (id)assetContextString;
- (id)initWithRecordID:(id)arg1 fieldName:(id)arg2 fileSignature:(id)arg3 referenceSignature:(id)arg4;

@end

