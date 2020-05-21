//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContentKit/NSCopying-Protocol.h>

@class NSDictionary;

@interface WFCoercionOptions : NSObject <NSCopying>
{
    NSDictionary *_dictionary;
}

+ (id)optionsWithDictionary:(id)arg1;
+ (id)new;
+ (void)registerDefaultDisallowedCoercionPath:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)optionsByAddingContentsOfOptions:(id)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (BOOL)coercionPathIsDisallowed:(id)arg1;
- (id)preferredTypes;
- (id)itemClassPrioritizationType;
- (void)makeRemoteServerAccessResourceAvailableIfNeededWithURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)makeContactAccessResourceAvailableIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

