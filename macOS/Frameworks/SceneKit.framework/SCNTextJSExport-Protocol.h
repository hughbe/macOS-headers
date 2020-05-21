//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class NSString;

@protocol SCNTextJSExport <JSExport>
+ (id)textWithString:(id)arg1 extrusionDepth:(double)arg2;
@property(nonatomic) double flatness;
@property(copy, nonatomic) id chamferProfile;
@property(nonatomic) long long chamferSegmentCount;
@property(nonatomic) double chamferRadius;
@property(copy, nonatomic) NSString *alignmentMode;
@property(copy, nonatomic) NSString *truncationMode;
@property(readonly, nonatomic) struct CGSize textSize;
@property(nonatomic) struct CGRect containerFrame;
@property(nonatomic, getter=isWrapped) BOOL wrapped;
@property(retain, nonatomic) id font;
@property(copy, nonatomic) id string;
@property(nonatomic) double extrusionDepth;
@end

