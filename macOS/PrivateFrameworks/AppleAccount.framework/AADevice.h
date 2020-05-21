//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AADevice : NSObject
{
    NSString *_model;
    NSString *_name;
    NSString *_osVersion;
    NSString *_swVersion;
    NSString *_modelSmallPhotoURL3x;
    NSString *_modelSmallPhotoURL2x;
    NSString *_modelSmallPhotoURL1x;
    NSString *_modelLargePhotoURL3x;
    NSString *_modelLargePhotoURL2x;
    NSString *_modelLargePhotoURL1x;
    NSString *_modelDisplayName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *modelDisplayName; // @synthesize modelDisplayName=_modelDisplayName;
@property(readonly, nonatomic) NSString *modelLargePhotoURL1x; // @synthesize modelLargePhotoURL1x=_modelLargePhotoURL1x;
@property(readonly, nonatomic) NSString *modelLargePhotoURL2x; // @synthesize modelLargePhotoURL2x=_modelLargePhotoURL2x;
@property(readonly, nonatomic) NSString *modelLargePhotoURL3x; // @synthesize modelLargePhotoURL3x=_modelLargePhotoURL3x;
@property(readonly, nonatomic) NSString *modelSmallPhotoURL1x; // @synthesize modelSmallPhotoURL1x=_modelSmallPhotoURL1x;
@property(readonly, nonatomic) NSString *modelSmallPhotoURL2x; // @synthesize modelSmallPhotoURL2x=_modelSmallPhotoURL2x;
@property(readonly, nonatomic) NSString *modelSmallPhotoURL3x; // @synthesize modelSmallPhotoURL3x=_modelSmallPhotoURL3x;
@property(readonly, nonatomic) NSString *swVersion; // @synthesize swVersion=_swVersion;
@property(readonly, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *model; // @synthesize model=_model;
- (id)initWithDictionary:(id)arg1;

@end

