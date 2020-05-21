//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUJSProxy.h>

#import <NeutrinoCore/NUJSVideoPropertiesExport-Protocol.h>

@protocol NUVideoProperties;

@interface NUJSVideoProperties : NUJSProxy <NUJSVideoPropertiesExport>
{
}

- (BOOL)containsMetadata:(id)arg1;
@property(readonly) struct CGSize originalSize;
@property(readonly) struct CGRect originalCleanAperture;
@property(readonly) struct CGRect cleanAperture;
@property(readonly) id <NUVideoProperties> videoProperties;
- (id)initWithVideoProperties:(id)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;

@end

