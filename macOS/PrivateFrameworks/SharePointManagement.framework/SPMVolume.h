//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SPMVolume : NSObject
{
    NSURL *_URL;
    NSString *_name;
}

- (void).cxx_destruct;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSURL *URL; // @synthesize URL=_URL;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1 name:(id)arg2;

@end

