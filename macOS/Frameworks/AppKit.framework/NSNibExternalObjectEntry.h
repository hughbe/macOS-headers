//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NSNibExternalObjectEntry : NSObject
{
    NSString *_key;
    NSString *_objectDescription;
    id _object;
}

+ (id)entryWithKey:(id)arg1 forObject:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy) NSString *objectDescription; // @synthesize objectDescription=_objectDescription;
@property(readonly, copy) NSString *key; // @synthesize key=_key;
- (void)dealloc;
@property(readonly) __weak id object; // @synthesize object=_object;
- (id)initWithKey:(id)arg1 object:(id)arg2;

@end

