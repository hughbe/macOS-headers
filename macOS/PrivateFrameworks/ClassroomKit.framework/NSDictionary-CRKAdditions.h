//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

#import <ClassroomKit/CRKJSONRepresentable-Protocol.h>

@interface NSDictionary (CRKAdditions) <CRKJSONRepresentable>
- (id)crk_dictionaryByAddingEntriesFromDictionary:(id)arg1;
@property(readonly, nonatomic) id crk_keyValueObservingNewObject;
@property(readonly, nonatomic) id crk_keyValueObservingOldObject;
- (id)crk_mapUsingBlock:(CDUnknownBlockType)arg1;
- (id)crk_JSONRepresentationWithPrettyPrinting:(BOOL)arg1 sortKeys:(BOOL)arg2;
@end

