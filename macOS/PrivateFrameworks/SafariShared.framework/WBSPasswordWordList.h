//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBSPasswordWordList : NSObject
{
    NSString *_identifier;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)entriesForString:(id)arg1;
- (void)enumerateEntriesForString:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initWithIdentifier:(id)arg1;

@end

