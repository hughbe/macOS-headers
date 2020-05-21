//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOMapItemAttribution, NSArray, NSString;

@interface _MKMapItemAttribution : NSObject
{
    GEOMapItemAttribution *_geoAttribution;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *appAdamID;
@property(readonly, nonatomic) BOOL requiresAttributionInCallout;
- (id)providerSnippetLogoImage;
- (id)providerLogoImage;
@property(readonly, nonatomic) BOOL shouldOpenInAppStore;
@property(readonly, nonatomic) NSArray *attributionApps;
@property(readonly, nonatomic) NSArray *attributionURLs;
@property(readonly, nonatomic) NSString *providerName;
@property(readonly, nonatomic) NSString *providerID;
- (id)initWithGEOMapItemAttribution:(id)arg1;

@end

