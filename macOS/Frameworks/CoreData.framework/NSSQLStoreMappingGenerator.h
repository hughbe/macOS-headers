//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSSQLStoreMappingGenerator : NSObject
{
    NSMutableDictionary *_names;
}

+ (void)invalidate;
+ (id)defaultMappingGenerator;
- (id)generateTableName:(id)arg1 isAncillary:(BOOL)arg2;
- (id)newGeneratedPropertyName:(id)arg1;
- (id)newUniqueNameWithBase:(unsigned short *)arg1 withLength:(unsigned long long)arg2;
- (id)uniqueNameWithBase:(id)arg1;
- (void)dealloc;
- (id)init;

@end

