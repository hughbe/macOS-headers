//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKAccountPostProvisioningContent : NSObject
{
    unsigned long long _type;
    NSString *_title;
    NSString *_subTitle;
    NSString *_body;
    NSString *_primaryButtonTitle;
    NSString *_secondaryButtonTitle;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *secondaryButtonTitle; // @synthesize secondaryButtonTitle=_secondaryButtonTitle;
@property(readonly, copy, nonatomic) NSString *primaryButtonTitle; // @synthesize primaryButtonTitle=_primaryButtonTitle;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithDictionary:(id)arg1;

@end

