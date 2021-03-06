//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CharacterPicker/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol CPKCharactersViewDataSource <NSObject>
- (NSString *)characterAtIndex:(long long)arg1 ofSection:(long long)arg2 withSpecificFont:(id *)arg3;
- (BOOL)isValidIndex:(long long)arg1 ofSection:(long long)arg2;
- (long long)numberOfCharactersOfSection:(long long)arg1;
- (NSString *)titleOfSection:(long long)arg1 localized:(BOOL)arg2;
- (long long)numberOfSections;

@optional
- (BOOL)foundCharacter:(NSString *)arg1 atIndex:(long long *)arg2 ofSection:(long long *)arg3;
- (NSString *)labelAtColumn:(long long)arg1;
- (NSString *)labelAtRow:(long long)arg1 ofSection:(long long)arg2;
- (NSArray *)preferredFontsOfSection:(long long)arg1 fallbackType:(long long *)arg2;
- (BOOL)isEditableSection:(long long)arg1;
- (NSString *)languageOfSection:(long long)arg1;
- (BOOL)hasSkinToneVariantsAtIndex:(long long)arg1 ofSection:(long long)arg2 hasSelected:(char *)arg3;
- (long long)numberOfColumns;
@end

