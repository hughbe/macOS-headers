//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CPLRUDictionaryNode : NSObject
{
    id _key;
    id _object;
    CPLRUDictionaryNode *next;
    CPLRUDictionaryNode *prev;
}

@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(readonly, nonatomic) id key; // @synthesize key=_key;
- (void)dealloc;
- (id)initWithKey:(id)arg1 object:(id)arg2;

@end

