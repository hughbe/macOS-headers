//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, NSUUID;

__attribute__((visibility("hidden")))
@interface CUNFCDevice : NSObject
{
    NSURL *_advertisedURI;
    NSUUID *_identifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSURL *advertisedURI; // @synthesize advertisedURI=_advertisedURI;

@end

