//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCopying-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSImageMultiURLReferencingRepProvider : NSObject <NSCopying>
{
    NSArray *_urls;
    NSArray *_representations;
}

@property(readonly) NSArray *urls; // @synthesize urls=_urls;
@property(readonly) NSArray *representations;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithURLs:(id)arg1;

@end

