//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcuts/NSCopying-Protocol.h>
#import <VoiceShortcuts/NSObject-Protocol.h>

@class NSDictionary, NSSet, NSString;
@protocol MTLModel;

@protocol MTLModel <NSObject, NSCopying>
+ (NSSet *)propertyKeys;
+ (id)modelWithDictionary:(NSDictionary *)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
- (BOOL)validate:(id *)arg1;
- (void)mergeValueForKey:(NSString *)arg1 fromModel:(id <MTLModel>)arg2;
- (id)initWithDictionary:(NSDictionary *)arg1 error:(id *)arg2;
@end

