//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSArray, NSData, NSString;

@interface CRKDownloadResourcesRequest : CATTaskRequest
{
    BOOL _openAfterDownloadCompletes;
    DMFControlGroupIdentifier *_courseIdentifier;
    NSArray *_resources;
    NSString *_resourcesDescription;
    NSData *_previewImageData;
    NSString *_sourceBundleIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property(nonatomic) BOOL openAfterDownloadCompletes; // @synthesize openAfterDownloadCompletes=_openAfterDownloadCompletes;
@property(retain, nonatomic) NSData *previewImageData; // @synthesize previewImageData=_previewImageData;
@property(copy, nonatomic) NSString *resourcesDescription; // @synthesize resourcesDescription=_resourcesDescription;
@property(copy, nonatomic) NSArray *resources; // @synthesize resources=_resources;
@property(copy, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // @synthesize courseIdentifier=_courseIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

