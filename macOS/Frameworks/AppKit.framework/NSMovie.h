//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCoding-Protocol.h>

@class NSData, NSURL;

@interface NSMovie : NSObject <NSCoding>
{
    NSData *_data;
    NSURL *_URL;
}

- (id)QTMovie;
- (id)initWithMovie:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)data;
- (id)URL;
- (void)dealloc;

@end

