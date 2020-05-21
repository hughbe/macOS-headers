//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class NSData, NSString;

@interface CPLFaceCropChange : CPLRecordChange
{
    NSString *_personIdentifier;
    NSData *_resourceData;
    long long _faceCropType;
    NSString *_rejectedPersonIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *rejectedPersonIdentifier; // @synthesize rejectedPersonIdentifier=_rejectedPersonIdentifier;
@property(nonatomic) long long faceCropType; // @synthesize faceCropType=_faceCropType;
@property(copy, nonatomic) NSData *resourceData; // @synthesize resourceData=_resourceData;
@property(copy, nonatomic) NSString *personIdentifier; // @synthesize personIdentifier=_personIdentifier;
- (id)propertiesDescription;
- (BOOL)validateChangeWithError:(id *)arg1;
- (BOOL)validateFullRecord;
- (void)setRelatedIdentifier:(id)arg1;
- (id)relatedIdentifier;
- (void)setPersonScopedIdentifier:(id)arg1;
- (id)personScopedIdentifier;
- (BOOL)supportsDirectDeletion;
- (BOOL)supportsDeletion;

@end

