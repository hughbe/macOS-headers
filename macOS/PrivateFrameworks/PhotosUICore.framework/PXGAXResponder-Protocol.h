//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXGView;
@protocol PXGAXGroup, PXGAXResponder;

@protocol PXGAXResponder <NSObject>
@property(nonatomic) __weak id <PXGAXResponder> axNextResponder;
- (void)axGroup:(id <PXGAXGroup>)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3;
- (PXGView *)axContainingViewForAXGroup:(id <PXGAXGroup>)arg1;
@end

