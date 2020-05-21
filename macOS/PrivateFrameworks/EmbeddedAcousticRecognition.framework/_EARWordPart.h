//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface _EARWordPart : NSObject
{
    NSString *_tagName;
    NSString *_orthography;
    long long _tag;
    unsigned long long _frequency;
    NSSet *_pronunciations;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *pronunciations; // @synthesize pronunciations=_pronunciations;
@property(readonly, nonatomic) unsigned long long frequency; // @synthesize frequency=_frequency;
@property(readonly, nonatomic) long long tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) NSString *orthography; // @synthesize orthography=_orthography;
@property(readonly, nonatomic) NSString *tagName;
- (id)initWithOrthography:(id)arg1 pronunciations:(id)arg2 tagName:(id)arg3 frequency:(unsigned long long)arg4;
- (id)initWithOrthography:(id)arg1 pronunciations:(id)arg2 tag:(long long)arg3;

@end

