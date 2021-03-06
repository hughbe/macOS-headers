//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/NSObject-Protocol.h>

@class NSArray, NSError, NSString;

@protocol CNFavoritesLogger <NSObject>
- (void)reportFavoritesAccessedBeforeFirstUnlock;
- (void)failedToWriteFavoritesToPath:(NSString *)arg1 error:(NSError *)arg2 simulateCrashReport:(BOOL)arg3;
- (void)failedToVerifyWrittenFavoritesExistsAtPath:(NSString *)arg1;
- (void)failedToWriteRemoteFavorites:(NSError *)arg1;
- (void)failedToVerifyFavorites:(NSArray *)arg1 withPropertyListFavorites:(NSArray *)arg2 error:(NSError *)arg3;
- (void)failedToConvertFavoritesToPropertyList:(NSError *)arg1;
- (void)failedToReadFavoritesFromPath:(NSString *)arg1 error:(NSError *)arg2 simulateCrashReport:(BOOL)arg3;
- (void)failedToReadRemoteFavorites:(NSError *)arg1;
- (void)finishedWritingFavoritesToPath:(NSString *)arg1 entriesCount:(unsigned long long)arg2;
- (void)finishedWritingRemoteFavorites;
- (void)finishedReadingFavoritesFromPath:(NSString *)arg1 entriesCount:(unsigned long long)arg2;
- (void)finishedReadingRemoteFavorites;
- (void)rematchingFavorites:(void (^)(void (^)(void)))arg1;
- (void)writingFavorites:(void (^)(void (^)(void)))arg1;
- (void)readingFavorites:(void (^)(void (^)(void)))arg1;
@end

