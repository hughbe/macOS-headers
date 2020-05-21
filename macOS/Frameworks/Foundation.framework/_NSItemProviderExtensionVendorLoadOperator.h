//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/_NSItemProviderLoading-Protocol.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface _NSItemProviderExtensionVendorLoadOperator : NSObject <_NSItemProviderLoading>
{
    NSUUID *_identifier;
    NSUUID *_extensionContextIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSUUID *extensionContextIdentifier; // @synthesize extensionContextIdentifier=_extensionContextIdentifier;
@property(copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)loadPreviewImageWithCompletionHandler:(CDUnknownBlockType)arg1 expectedValueClass:(Class)arg2 options:(id)arg3;
- (void)loadItemForTypeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 expectedValueClass:(Class)arg3 options:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithExtensionContextIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

