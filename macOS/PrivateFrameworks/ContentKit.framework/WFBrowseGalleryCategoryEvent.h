//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFBrowseGalleryCategoryEvent : WFEvent
{
    NSString *_key;
    NSString *_galleryCategoryIdentifier;
}

+ (Class)codableEventClass;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *galleryCategoryIdentifier; // @synthesize galleryCategoryIdentifier=_galleryCategoryIdentifier;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;

@end

