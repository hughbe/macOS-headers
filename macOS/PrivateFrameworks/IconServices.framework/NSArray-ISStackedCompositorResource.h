//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

#import <IconServices/ISStackedCompositorResource-Protocol.h>

@class NSString;
@protocol ISScalableCompositorResource;

@interface NSArray (ISStackedCompositorResource) <ISStackedCompositorResource>
@property(readonly) NSArray<ISScalableCompositorResource> *resourceStack;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

