//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectModel, NSString;

__attribute__((visibility("hidden")))
@interface PFCloudKitModelValidator : NSObject
{
    NSManagedObjectModel *_model;
    NSString *_configurationName;
    BOOL _skipValueTransformerValidation;
    BOOL _validateLegacyMetadataAttributes;
}

+ (id)stringFromDeleteRule:(unsigned long long)arg1;
@property(nonatomic) BOOL validateLegacyMetadataAttributes; // @synthesize validateLegacyMetadataAttributes=_validateLegacyMetadataAttributes;
@property(nonatomic) BOOL skipValueTransformerValidation; // @synthesize skipValueTransformerValidation=_skipValueTransformerValidation;
- (BOOL)validateEntity:(id)arg1 hasAttributeNamed:(id)arg2 ofType:(unsigned long long)arg3 andReturnFailureReason:(id *)arg4;
- (BOOL)validateEntities:(id)arg1 error:(id *)arg2;
- (BOOL)_validateManagedObjectModel:(id)arg1 error:(id *)arg2;
- (BOOL)validate:(id *)arg1;
- (void)dealloc;
- (id)initWithManagedObjectModel:(id)arg1 configuration:(id)arg2;
- (id)init;

@end

