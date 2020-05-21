//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKOperationConfiguration;

@interface NSCloudKitMirroringRequestOptions : NSObject
{
    CKOperationConfiguration *_operationConfiguration;
}

@property(retain, nonatomic) CKOperationConfiguration *operationConfiguration; // @synthesize operationConfiguration=_operationConfiguration;
@property(nonatomic) long long qualityOfService;
@property(nonatomic) BOOL allowsCellularAccess;
- (void)applyToOperation:(id)arg1;
- (void)resetOperationConfiguration;
- (id)copy;
- (void)dealloc;
- (id)init;

@end

