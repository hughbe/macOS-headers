//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface CNVCardFilteredPersonScope : NSObject
{
    NSSet *_blacklist;
    unsigned long long _filterOptions;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long filterOptions; // @synthesize filterOptions=_filterOptions;
@property(readonly) NSSet *blacklist; // @synthesize blacklist=_blacklist;
- (BOOL)isEmpty;
- (id)initWithBlacklist:(id)arg1 options:(unsigned long long)arg2;

@end

