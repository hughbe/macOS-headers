//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Automator/NSSecureCoding-Protocol.h>

@class AMFFeedMetadata, NSArray, NSURL;

@interface AMFFeed : NSObject <NSSecureCoding>
{
    NSURL *_url;
    AMFFeedMetadata *_metadata;
    NSArray *_entries;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSArray *entries; // @synthesize entries=_entries;
@property(retain) AMFFeedMetadata *metadata; // @synthesize metadata=_metadata;
@property(retain) NSURL *url; // @synthesize url=_url;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithURL:(id)arg1 metadata:(id)arg2;

@end

