//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TLKUtilities : NSObject
{
}

+ (void)performAnimatableChanges:(CDUnknownBlockType)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)performAnimatableChanges:(CDUnknownBlockType)arg1 animated:(BOOL)arg2;
+ (void)performAnimatableChanges:(CDUnknownBlockType)arg1;
+ (BOOL)recursivelyCheckIfSubviewTapped:(id)arg1 forTappedView:(id)arg2;
+ (id)testImageWithSize:(struct CGSize)arg1 text:(id)arg2;
+ (id)testImageWithSize:(struct CGSize)arg1;
+ (struct NSEdgeInsets)standardInsets;
+ (double)onePixelForCurrentScreenResolution;
+ (BOOL)deviceSupportsRotation;
+ (double)standardTableCellContentInset;
+ (void)dispatchMainIfNecessary:(CDUnknownBlockType)arg1;
+ (void)dispatchAsyncIfNecessary:(CDUnknownBlockType)arg1;

@end

