//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MKMapItem, NSURL, NSURLRequest;

@interface MKMapItemMetadataRequest : NSObject
{
    MKMapItem *_mapItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(readonly, nonatomic) NSURLRequest *urlRequest;
@property(readonly, nonatomic) NSURL *url;
- (void)handleError:(id)arg1;
- (void)handleData:(id)arg1;

@end

