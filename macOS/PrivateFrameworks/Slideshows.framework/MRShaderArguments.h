//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MRShaderArguments : NSObject
{
    BOOL _texture0ClampsToBorder;
    BOOL _texture1ClampsToBorder;
    NSString *_filter0;
    NSString *_filter1;
    NSString *_filter2;
    NSString *_filter3;
}

@property(nonatomic) BOOL texture1ClampsToBorder; // @synthesize texture1ClampsToBorder=_texture1ClampsToBorder;
@property(nonatomic) BOOL texture0ClampsToBorder; // @synthesize texture0ClampsToBorder=_texture0ClampsToBorder;
@property(copy) NSString *filter3; // @synthesize filter3=_filter3;
@property(copy) NSString *filter2; // @synthesize filter2=_filter2;
@property(copy) NSString *filter1; // @synthesize filter1=_filter1;
@property(copy) NSString *filter0; // @synthesize filter0=_filter0;
- (void)dealloc;

@end

